%{
#include <stdio.h>
#include <string.h>
#include "inc.h"
void yyerror(const char *s);

int linect(FILE *fopen);
void nextline(void);

void push(infonode **top, infonode *inf, char *tok);
void pop(infonode **top, char *type);
void insert(unsigned long i, char *type, int loc);

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
	: IDENTIFIER			{pop(&init, "expression var");}
	| constant				
	| string				
	| '(' expression ')'	
	| generic_selection		
	;

constant
	: I_CONSTANT		/* includes character_constant */	
	| F_CONSTANT											
	| ENUMERATION_CONSTANT	/* after it has been defined as such */ 
	| TRUEVAL
	| FALSEVAL			
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER			{ pop(&init, "enum declaration");}
	;

string
	: STRING_LITERAL		
	| FUNC_NAME				
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')' 
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association	
	;

generic_association
	: type_name ':' assignment_expression	
	| DEFAULT ':' assignment_expression		
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'					
	| postfix_expression '(' ')'							
	| postfix_expression '(' argument_expression_list ')'	
	| postfix_expression '.' IDENTIFIER						{ pop(&init, "struct part");}
	| postfix_expression PTR_OP IDENTIFIER					{ pop(&init, "struct part");}
	| postfix_expression INC_OP								
	| postfix_expression DEC_OP								
	| '(' type_name ')' '{' initializer_list '}'			
	| '(' type_name ')' '{' initializer_list ',' '}'		
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression	
	;

unary_expression
	: postfix_expression	
	| INC_OP unary_expression		
	| DEC_OP unary_expression		
	| unary_operator cast_expression
	| SIZEOF unary_expression		
	| SIZEOF '(' type_name ')'		
	| ALIGNOF '(' type_name ')'		
	;

unary_operator
	: '&'	
	| '*'	
	| '+'	
	| '-'	
	| '~'	
	| '!'	
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression		
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression		
	| multiplicative_expression '/' cast_expression		
	| multiplicative_expression '%' cast_expression		
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression		
	| additive_expression '-' multiplicative_expression		
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression		
	| shift_expression RIGHT_OP additive_expression		
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression		
	| relational_expression '>' shift_expression		
	| relational_expression LE_OP shift_expression		
	| relational_expression GE_OP shift_expression		
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression		
	| equality_expression NE_OP relational_expression		
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression		
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression	
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression	
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression		
	;

logical_or_expression
	: logical_and_expression  
	| logical_or_expression OR_OP logical_and_expression	
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression	
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='				
	| MUL_ASSIGN		
	| DIV_ASSIGN		
	| MOD_ASSIGN		
	| ADD_ASSIGN		
	| SUB_ASSIGN		
	| LEFT_ASSIGN		
	| RIGHT_ASSIGN		
	| AND_ASSIGN		
	| XOR_ASSIGN		
	| OR_ASSIGN			
	;

expression
	: assignment_expression 
	| expression ',' assignment_expression		
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'	
	| declaration_specifiers init_declarator_list ';'		
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
	| init_declarator_list ',' init_declarator		
	;

init_declarator
	: declarator '=' initializer		
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */	
	| EXTERN			
	| STATIC			
	| THREAD_LOCAL		
	| AUTO				
	| REGISTER			
	;

type_specifier
	: VOID															
	| CHAR															
	| SHORT															
	| INT															
	| LONG															
	| FLOAT															
	| DOUBLE														
	| SIGNED														
	| UNSIGNED														
	| BOOL															
	| COMPLEX														
	| IMAGINARY	  	/* non-mandated extension */					
	| atomic_type_specifier											
	| struct_or_union_specifier										
	| enum_specifier												
	| TYPEDEF_NAME		/* after it has been defined as such */		
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'					
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'		{ pop(&init, "struct type");}
	| struct_or_union IDENTIFIER										{ pop(&init, "struct type");}				
	;

struct_or_union
	: STRUCT		
	| UNION			
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */ 	
	| specifier_qualifier_list struct_declarator_list ';'				
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
	| struct_declarator_list ',' struct_declarator		
	;

struct_declarator
	: ':' constant_expression					
	| declarator ':' constant_expression		
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'					
	| ENUM '{' enumerator_list ',' '}'				
	| ENUM IDENTIFIER '{' enumerator_list '}'		{ pop(&init, "enum type");}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'	{ pop(&init, "enum type");}
	| ENUM IDENTIFIER								{ pop(&init, "enum type");}
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator			
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression		
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'		
	;

type_qualifier
	: CONST		
	| RESTRICT		
	| VOLATILE		
	| ATOMIC		
	;

function_specifier
	: INLINE		
	| NORETURN		
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'				
	| ALIGNAS '(' constant_expression ')'	
	;

declarator
	: pointer direct_declarator		
	| direct_declarator				
	;

direct_declarator
	: IDENTIFIER												{ pop(&init, "declarator var");}
	| '(' declarator ')'										
	| direct_declarator '[' ']'									
	| direct_declarator '[' '*' ']'								
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'		
	| direct_declarator '[' STATIC assignment_expression ']'							
	| direct_declarator '[' type_qualifier_list '*' ']'									
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'		
	| direct_declarator '[' type_qualifier_list assignment_expression ']'				
	| direct_declarator '[' type_qualifier_list ']'										
	| direct_declarator '[' assignment_expression ']'									
	| direct_declarator '(' parameter_type_list ')'						
	| direct_declarator '(' ')'											
	| direct_declarator '(' identifier_list ')'							
	;

pointer
	: '*' type_qualifier_list pointer		
	| '*' type_qualifier_list				
	| '*' pointer							
	| '*'									
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS						
	| parameter_list									
	;

parameter_list
	: parameter_declaration							
	| parameter_list ',' parameter_declaration		
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER									{ ;;}
	| identifier_list ',' IDENTIFIER				{ }
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
	: '(' abstract_declarator ')'				
	| '[' ']'									
	| '[' '*' ']'								
	| '[' STATIC type_qualifier_list assignment_expression ']'			
	| '[' STATIC assignment_expression ']'													
	| '[' type_qualifier_list STATIC assignment_expression ']'						
	| '[' type_qualifier_list assignment_expression ']'					
	| '[' type_qualifier_list ']'									
	| '[' assignment_expression ']'									
	| direct_abstract_declarator '[' ']'							
	| direct_abstract_declarator '[' '*' ']'						
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'		
	| direct_abstract_declarator '[' STATIC assignment_expression ']'							
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'				
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'			
	| direct_abstract_declarator '[' type_qualifier_list ']'									
	| direct_abstract_declarator '[' assignment_expression ']'			
	| '(' ')'																			
	| '(' parameter_type_list ')'										
	| direct_abstract_declarator '(' ')'											
	| direct_abstract_declarator '(' parameter_type_list ')'			
	;

initializer
	: '{' initializer_list '}'				
	| '{' initializer_list ',' '}'			
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer 		
	| initializer_list ',' initializer					
	;

designation
	: designator_list '='	
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'		
	| '.' IDENTIFIER					{  pop(&init, "designator");}
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'   	
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
	: IDENTIFIER ':' statement						{  pop(&init, "label");}
	| CASE constant_expression ':' statement		
	| DEFAULT ':' statement							
	;

compound_statement
	: '{' '}'								
	| '{'  block_item_list '}'				
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
	: ';'					
	| expression ';'		
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement				
	| IF '(' expression ')' statement								
	| SWITCH '(' expression ')' statement							
	;

iteration_statement
	: WHILE '(' expression ')' statement													
	| DO statement WHILE '(' expression ')' ';'										
	| FOR '(' expression_statement expression_statement ')' statement				
	| FOR '(' expression_statement expression_statement expression ')' statement	
	| FOR '(' declaration expression_statement ')' statement						
	| FOR '(' declaration expression_statement expression ')' statement				
	;

jump_statement
	: GOTO IDENTIFIER ';'		{ pop(&init, "goto label");}
	| CONTINUE ';'				
	| BREAK ';'					
	| RETURN ';'				
	| RETURN expression ';'		
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
infonode *infarr[1009]; 

void dispstk(infonode *top);
unsigned long hash(unsigned char *str);
void disphsh(void);

node *nav(int loc)
{
	int line = loc/100, offset = (loc - line*100);
	node *going = (*(linearr+line)).start;
	for (int i = 0; i<offset; i++)
	{
		going = going->next;
	}
	return going;
}

void push(infonode **top, infonode *inf, char *tok)
{
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

}

void addinfo(infonode *inf)
{
	node *nd = nav(inf->loc);
	free(nd->type);
	nd->type = malloc(strlen(inf->tok)+1);
	strcpy(nd->type,inf->tok);
	if (strcmp(nd->type, "declarator var") == 0)
	{
		unsigned long h = hash(nd->tok);
		insert(h, nd->tok, (inf->loc)/100);
	}
}

void record(infonode *inf, char *type)
{

	free(inf->tok);
	inf->tok = malloc(strlen(type)+1);
	strcpy(inf->tok,type);
	push(&rec, inf, type);
}

void insert(unsigned long i, char *tok, int loc)
{
	infonode *inf = infarr[i];
	infonode *newinf = (infonode *) malloc(sizeof(infonode));
	newinf->next = inf;
	newinf->tok = malloc(strlen(tok)+1);
	strcpy(newinf->tok, tok);
	newinf->loc = loc;
	infarr[i] = newinf;
}

void disphsh(void)
{
	printf("\ndisphsh: \n");
	infonode *inf;
	for (int i = 0; i<1009; i++)
	{
		inf = infarr[i];
		while (inf)
		{
			printf("hashline: %d, token: %s, line: %d\n", i, inf->tok, inf->loc);
			inf = inf->next;
		}
	}
}

int searchhsh(char *tok)
{
	unsigned long h = hash(tok);
	infonode *sch = infarr[h];
	while (sch)
	{
		if (strcmp(sch->tok,tok) == 0)
			return sch->loc;
		sch = sch->next;
	}
	return -1;
}

void pop(infonode **top, char *type)
{
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

unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; 

    return hash%1009;
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
	for (i = 0; i<1009; i++)
	{
		infarr[i] = NULL; 
	}
	
	for (i = 1; i <= ln; i++)
	{
		(*(linearr+i)).n = i;
		(*(linearr+i)).start = NULL;
	}
	
	for (i = 0; i < 109; i++)
	{
		infarr[i] = NULL;
	}
	
	while (!feof(yyin))
	{
		yyparse();
	}
	
	if (first != NULL)
		nextline();
		
	infonode *store = rec;
	while (store)
	{
		addinfo(store);
		store = store->next;
	}
	
	printf("$$$$$$$$$$$\n");
	disp(ln);
	printf("$$$$$$$$$$$\n");
	
	printf("\n");
	dispstk(init);
	dispstk(rec);
	disphsh();
	
	// printf("%d\n",searchhsh("main"));
	// printf("%d\n",searchhsh("j"));
	
	fclose(yyin);
}

void disp(int ln)
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