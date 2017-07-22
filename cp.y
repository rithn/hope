%{
#include <stdio.h>
#include <string.h>
#include "inc.h"
void yyerror(const char *s);

int linect(FILE *fopen);
void nextline(void);
void move(int n);

int currlex = 0;
void push(infonode **top, infonode *inf, char *tok);
void pop(infonode **top, char *type);

infonode *init = NULL, *rec = NULL;

enum {F = 1, ST, E, ST_ID};

%}

%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF TRUEVAL FALSEVAL
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start translation_unit
%%

primary_expression
	: IDENTIFIER			{move(1);pop(&init, "expression var");}
	| constant				
	| string				
	| '(' expression ')'	{move(2);}
	| generic_selection		
	;

constant
	: I_CONSTANT		/* includes character_constant */	{move(1);}
	| F_CONSTANT											{move(1);}
	| ENUMERATION_CONSTANT	/* after it has been defined as such */ {move(1);}
	| TRUEVAL
	| FALSEVAL			
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER			{move(1); pop(&init, "enum declaration");}
	;

string
	: STRING_LITERAL		{move(1);}
	| FUNC_NAME				{move(1);}
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')' {move(4);}
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association	{move(1);}
	;

generic_association
	: type_name ':' assignment_expression	{move(1);}
	| DEFAULT ':' assignment_expression		{move(2);}
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'					{move(2);}
	| postfix_expression '(' ')'							{move(2);}
	| postfix_expression '(' argument_expression_list ')'	{move(2);}
	| postfix_expression '.' IDENTIFIER						{move(2); pop(&init, "struct part");}
	| postfix_expression PTR_OP IDENTIFIER					{move(2); pop(&init, "struct part");}
	| postfix_expression INC_OP								{move(1);}
	| postfix_expression DEC_OP								{move(1);}
	| '(' type_name ')' '{' initializer_list '}'			{move(4);}
	| '(' type_name ')' '{' initializer_list ',' '}'		{move(5);}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression	{move(1);}
	;

unary_expression
	: postfix_expression	
	| INC_OP unary_expression		{move(1);}
	| DEC_OP unary_expression		{move(1);}
	| unary_operator cast_expression
	| SIZEOF unary_expression		{move(1);}
	| SIZEOF '(' type_name ')'		{move(3);}
	| ALIGNOF '(' type_name ')'		{move(3);}
	;

unary_operator
	: '&'	{move(1);}
	| '*'	{move(1);}
	| '+'	{move(1);}
	| '-'	{move(1);}
	| '~'	{move(1);}
	| '!'	{move(1);}
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression		{move(2);}
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression		{move(1);}
	| multiplicative_expression '/' cast_expression		{move(1);}
	| multiplicative_expression '%' cast_expression		{move(1);}
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression		{move(1);}
	| additive_expression '-' multiplicative_expression		{move(1);}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression		{move(1);}
	| shift_expression RIGHT_OP additive_expression		{move(1);}
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression		{move(1);}
	| relational_expression '>' shift_expression		{move(1);}
	| relational_expression LE_OP shift_expression		{move(1);}
	| relational_expression GE_OP shift_expression		{move(1);}
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression		{move(1);}
	| equality_expression NE_OP relational_expression		{move(1);}
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression		{move(1);}
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression	{move(1);}
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression	{move(1);}
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression		{move(1);}
	;

logical_or_expression
	: logical_and_expression  
	| logical_or_expression OR_OP logical_and_expression	{move(1);}
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression	{move(2);}
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='				{move(1);}
	| MUL_ASSIGN		{move(1);}
	| DIV_ASSIGN		{move(1);}
	| MOD_ASSIGN		{move(1);}
	| ADD_ASSIGN		{move(1);}
	| SUB_ASSIGN		{move(1);}
	| LEFT_ASSIGN		{move(1);}
	| RIGHT_ASSIGN		{move(1);}
	| AND_ASSIGN		{move(1);}
	| XOR_ASSIGN		{move(1);}
	| OR_ASSIGN			{move(1);}
	;

expression
	: assignment_expression 
	| expression ',' assignment_expression		{move(1);}
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'	{move(1);}
	| declaration_specifiers init_declarator_list ';'		{move(1);}
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator		{move(1);}
	;

init_declarator
	: declarator '=' initializer		{move(1);}
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */	{move(1);}
	| EXTERN			{move(1);}
	| STATIC			{move(1);}
	| THREAD_LOCAL		{move(1);}
	| AUTO				{move(1);}
	| REGISTER			{move(1);}
	;

type_specifier
	: VOID					{move(1);}										
	| CHAR					{move(1);}										
	| SHORT					{move(1);}										
	| INT					{move(1);}										
	| LONG					{move(1);}										
	| FLOAT					{move(1);}										
	| DOUBLE				{move(1);}										
	| SIGNED				{move(1);}										
	| UNSIGNED				{move(1);}										
	| BOOL					{move(1);}										
	| COMPLEX				{move(1);}										
	| IMAGINARY	  	/* non-mandated extension */			{move(1);}		
	| atomic_type_specifier											
	| struct_or_union_specifier										
	| enum_specifier												
	| TYPEDEF_NAME		/* after it has been defined as such */		{move(1);}
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'					{move(2);}
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'		{move(3); pop(&init, "struct type");}
	| struct_or_union IDENTIFIER										{move(1); pop(&init, "struct type");}				
	;

struct_or_union
	: STRUCT		{move(1);}
	| UNION			{move(1);}
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */ 	{move(1);}
	| specifier_qualifier_list struct_declarator_list ';'				{move(1);}
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator		{move(1);}
	;

struct_declarator
	: ':' constant_expression					{move(1);}
	| declarator ':' constant_expression		{move(1);}
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'					{move(3);}
	| ENUM '{' enumerator_list ',' '}'				{move(4);}
	| ENUM IDENTIFIER '{' enumerator_list '}'		{move(4); pop(&init, "enum type");}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'	{move(5); pop(&init, "enum type");}
	| ENUM IDENTIFIER								{move(2); pop(&init, "enum type");}
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator			{move(1);}
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression		{move(1);}
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'		{move(3);}
	;

type_qualifier
	: CONST		{move(1);}
	| RESTRICT		{move(1);}
	| VOLATILE		{move(1);}
	| ATOMIC		{move(1);}
	;

function_specifier
	: INLINE		{move(1);}
	| NORETURN		{move(1);}
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'				{move(3);}
	| ALIGNAS '(' constant_expression ')'	{move(3);}
	;

declarator
	: pointer direct_declarator		
	| direct_declarator				
	;

direct_declarator
	: IDENTIFIER												{move(1); pop(&init, "declarator var");}
	| '(' declarator ')'										{move(2);}
	| direct_declarator '[' ']'									{move(2);}
	| direct_declarator '[' '*' ']'								{move(3);}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'		{move(3);}
	| direct_declarator '[' STATIC assignment_expression ']'							{move(3);}
	| direct_declarator '[' type_qualifier_list '*' ']'									{move(3);}
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'		{move(3);}
	| direct_declarator '[' type_qualifier_list assignment_expression ']'				{move(2);}
	| direct_declarator '[' type_qualifier_list ']'										{move(2);}
	| direct_declarator '[' assignment_expression ']'									{move(2);}
	| direct_declarator '(' parameter_type_list ')'						{move(2);}
	| direct_declarator '(' ')'											{move(2);}
	| direct_declarator '(' identifier_list ')'							{move(2);}
	;

pointer
	: '*' type_qualifier_list pointer		{move(1);}
	| '*' type_qualifier_list				{move(1);}
	| '*' pointer							{move(1);}
	| '*'									{move(1);}
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS						{move(2);}
	| parameter_list									
	;

parameter_list
	: parameter_declaration							
	| parameter_list ',' parameter_declaration		{move(1);}
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER									{move(1); ;;}
	| identifier_list ',' IDENTIFIER				{move(2); }
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'				{move(2);}
	| '[' ']'									{move(2);}
	| '[' '*' ']'								{move(3);}
	| '[' STATIC type_qualifier_list assignment_expression ']'			{move(3);}
	| '[' STATIC assignment_expression ']'								{move(3);}					
	| '[' type_qualifier_list STATIC assignment_expression ']'			{move(3);}			
	| '[' type_qualifier_list assignment_expression ']'					{move(2);}
	| '[' type_qualifier_list ']'									{move(2);}
	| '[' assignment_expression ']'									{move(2);}
	| direct_abstract_declarator '[' ']'							{move(2);}
	| direct_abstract_declarator '[' '*' ']'						{move(3);}
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'		{move(3);}
	| direct_abstract_declarator '[' STATIC assignment_expression ']'							{move(3);}
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'				{move(2);}
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'		{move(3);}	
	| direct_abstract_declarator '[' type_qualifier_list ']'									{move(2);}
	| direct_abstract_declarator '[' assignment_expression ']'			{move(2);}
	| '(' ')'															{move(2);}				
	| '(' parameter_type_list ')'										{move(2);}
	| direct_abstract_declarator '(' ')'								{move(2);}			
	| direct_abstract_declarator '(' parameter_type_list ')'			{move(2);}
	;

initializer
	: '{' initializer_list '}'				{move(2);}
	| '{' initializer_list ',' '}'			{move(3);}
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer 		{move(1);}
	| initializer_list ',' initializer					{move(1);}
	;

designation
	: designator_list '='	{move(1);}
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'		{move(2);}
	| '.' IDENTIFIER					{move(2);  pop(&init, "designator");}
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'   	{move(6);}
	;

statement
	: labeled_statement			
	| compound_statement		
	| expression_statement		
	| selection_statement		
	| iteration_statement		
	| jump_statement			
	;

labeled_statement
	: IDENTIFIER ':' statement						{move(2);  pop(&init, "label");}
	| CASE constant_expression ':' statement		{move(2);}
	| DEFAULT ':' statement							{move(2);}
	;

compound_statement
	: '{' '}'								{move(2);}
	| '{'  block_item_list '}'				{move(2);}
	;

block_item_list
	: block_item					
	| block_item_list block_item	
	;

block_item
	: declaration					
	| statement				
	;

expression_statement
	: ';'					{move(1);}
	| expression ';'		{move(1);}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement		{move(4);}		
	| IF '(' expression ')' statement						{move(3);}		
	| SWITCH '(' expression ')' statement					{move(3);}		
	;

iteration_statement
	: WHILE '(' expression ')' statement					{move(3);}								
	| DO statement WHILE '(' expression ')' ';'				{move(5);}						
	| FOR '(' expression_statement expression_statement ')' statement		{move(3);}		
	| FOR '(' expression_statement expression_statement expression ')' statement	{move(3);}
	| FOR '(' declaration expression_statement ')' statement						{move(3);}
	| FOR '(' declaration expression_statement expression ')' statement				{move(3);}
	;

jump_statement
	: GOTO IDENTIFIER ';'		{move(3); pop(&init, "goto label");}
	| CONTINUE ';'				{move(2);}
	| BREAK ';'					{move(2);}
	| RETURN ';'				{move(2);}
	| RETURN expression ';'		{move(2);}
	;

translation_unit
	: external_declaration						
	| translation_unit external_declaration		
	;

external_declaration
	: function_definition			
	| declaration					
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement			
	| declaration_specifiers declarator compound_statement							
	;

declaration_list
	: declaration						
	| declaration_list declaration		
	;

%%

FILE *yyin;

node *first = NULL;
node *last = NULL;
node *prev = NULL;

int ln, currloc = 0, currline = 0;

line *linearr; 
infonode *infoarr[109];

void dispstk(infonode *top);

node *nav(int loc)
{
	int line = loc/100, offset = (loc - line*100);
	node *going = (*(linearr+line)).start;
	printf("in nav %d\n",loc);
	for (int i = 0; i<offset; i++)
	{
		going = going->next;
		printf("%d\n",i);
	}
	return going;
}

void push(infonode **top, infonode *inf, char *tok)
{
	printf("push: %s\n", tok);
	if (top != NULL)
    {
        infonode *newnode =(infonode *)malloc(sizeof(infonode));
		if (inf == NULL)
		{
			newnode->loc = currloc;
		}
		else
		{
			newnode->loc = inf->loc;
		}
		newnode->tok = malloc(strlen(tok)+1);
		strcpy(newnode->tok,tok);
		newnode->next = *top;
		*top = newnode;
    }
	printf("in push\n");
	dispstk(init);
	dispstk(rec);
	printf("push end\n\n");
}

void addinfo(infonode *inf)
{
	node *nd = nav(inf->loc);
	free(nd->type);
	nd->type = malloc(strlen(inf->tok)+1);
	strcpy(nd->type,inf->tok);
}

void record(infonode *inf, char *type)
{
	printf("record start\n");
	free(inf->tok);
	inf->tok = malloc(strlen(type)+1);
	strcpy(inf->tok,type);
	push(&rec, inf, type);
	printf("record end\n");
}

void pop(infonode **top, char *type)
{
    printf("popping: %s\n",type);
	infonode *top1;
 
    if (top == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
	{
        top1 = *top;
		if (type)
			record(*top, type);
		*top = top1->next;
		free(top1);
	}
}

void dispstk(infonode *top)
{
	printf("\ndispstk:\n");
	infonode *top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("tok: %s, loc: %d\n", top1->tok, top1->loc);
        top1 = top1->next;
    }
}

int hash(int h)
{
   return h%109;
}

void move(int n)
{
	currlex += n;
}

void nextline(void)
{
	(*(linearr+currline)).start = first;
	(*(linearr+currline)).n = currline;
	first = NULL;
	last = NULL;
	prev = NULL;
	currline += 1;
	currloc = ((currloc/100)+1)*100;
}

void Node(char *tok, char type[])
{
	currloc++;
	node *currnode = (node *) malloc(sizeof(node));
	currnode->next = NULL;
	currnode->tok = malloc(strlen(tok)+1);
	currnode->type = malloc(strlen(type)+1);
	strcpy(currnode->tok, tok);
	strcpy(currnode->type, type);
	if (prev)
		currnode->prev = prev;
	else
		currnode->prev = NULL;
	prev = currnode;
	if (first == NULL && last == NULL)
	{
		first = last = currnode;
	}
	else
	{
		last->next = currnode;
		last = currnode;
	}
}

int main(int argc, char *argv[])
{
	
	if (argc == 1)
	{
		printf("no file given\n");
		return 1;
	}
	yyin = fopen(argv[1], "r");
	ln = linect(yyin);
	
	int i;
	
	linearr = malloc(sizeof(line)*ln);
	for (i = 1; i <= ln; i++)
	{
		(*(linearr+i)).n = i;
		(*(linearr+i)).start = NULL;
	}
	
	for (i = 0; i < 109; i++)
	{
		infoarr[i] = NULL;
	}
	
	while (!feof(yyin))
	{
		yyparse();
	}

	printf("currlex: %d\n",currlex);
	
	if (first != NULL)
		nextline();
		
	infonode *store = rec;
	while (store)
	{
		addinfo(store);
		store = store->next;
	}
	
	printf("$$$$$$$$$$$\n");
	disp(linearr, ln);
	printf("$$$$$$$$$$$\n");
	
	printf("\n");
	dispstk(init);
	dispstk(rec);
	
	fclose(yyin);
}

void disp(line *linearr, int ln)
{
	int i;
	for (i = 0; i<ln; i++)
	{
		printf("%3d. %d tokens: \n",i,(*(linearr+i)).n);
		node *read = (*(linearr+i)).start;
		for (; read; read = read->next)
		{
			printf("%s - %s\n",read->tok, read->type);
		}
		printf("\n\n");
	}
}

int linect(FILE *fopen)
{
	if (fopen == NULL)
	{
		printf("Couldn't open file\n");
		return 0;
	}
	int count = 1;
	char c;
	for (c = getc(fopen); c != EOF; c = getc(fopen))
		if (c == '\n')
			count += 1;
	fseek(fopen, 0, SEEK_SET);
	return count;
}

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}