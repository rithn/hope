O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\f]

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cp.tab.h"
#include "inc.h"

extern node *currnode;
extern node *prev;

extern void yyerror(const char *);  /* prints grammar violation message */
extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

extern infonode *init;

static void comment(void);
static void prep(void);
static int check_type(void);
%}

%%
"/*"                                    { comment(); }
"#"										{ prep(); }
"//".*                                    { /* consume //-comment */ }
"#include"   				{ Node("include ","INCLUDE"); return(INCLUDE);}
"auto"					{ Node("auto ","AUTO"); return(AUTO); }
"bool"					{ Node("bool ", "BOOL"); return(BOOL); }
"break"					{ Node("break ","BREAK"); return(BREAK); }
"case"					{ Node("case ","CASE"); return(CASE); }
"char"					{ Node("char ","CHAR"); return(CHAR); }
"const"					{ Node("const ","CONST"); return(CONST); }
"continue"				{ Node("continue ","CONTINUE"); return(CONTINUE); }
"default"				{ Node("default ","DEFAULT"); return(DEFAULT); }
"do"					{ Node("do ","DO"); return(DO); }
"double"				{ Node("double ","DOUBLE"); return(DOUBLE); }
"else"					{ Node("else ","ELSE"); return(ELSE); }
"enum"					{ Node("enum ","ENUM"); return(ENUM); }
"extern"				{ Node("extern ","EXTERN"); return(EXTERN); }
"false"					{ Node("false ", "FALSEVAL"); return(FALSEVAL);}
"float"					{ Node("float ","FLOAT"); return(FLOAT); }
"for"					{ Node("for ","FOR"); return(FOR); }
"goto"					{ Node("goto ","GOTO"); return(GOTO); }
"if"					{ Node("if ","IF"); return(IF); }
"inline"				{ Node("inline ","INLINE"); return(INLINE); }
"int"					{ Node("int ","INT"); return(INT); }
"long"					{ Node("long ","LONG"); return(LONG); }
"register"				{ Node("register ","REGISTER"); return(REGISTER); }
"restrict"				{ Node("restrict ","RESTRICT"); return(RESTRICT); }
"return"				{ Node("return ","RETURN"); return(RETURN); }
"short"					{ Node("short ","SHORT"); return(SHORT); }
"signed"				{ Node("signed ","SIGNED"); return(SIGNED); }
"sizeof"				{ Node("sizeof ","SIZEOF"); return(SIZEOF); }
"static"				{ Node("static ","STATIC"); return(STATIC); }
"struct"				{ Node("struct ","STRUCT"); return(STRUCT); }
"switch"				{ Node("switch ","SWITCH"); return(SWITCH); }
"true"					{ Node("true ", "TRUEVAL"); return(TRUEVAL); }
"typedef"				{ Node("typedef ","TYPEDEF"); return(TYPEDEF); }
"union"					{ Node("union ","UNION"); return(UNION); }
"unsigned"				{ Node("unsigned ","UNSIGNED"); return(UNSIGNED); }
"void"					{ Node("void ","VOID"); return(VOID); }
"volatile"				{ Node("volatile ","VOLATILE"); return(VOLATILE); }
"while"					{ Node("while ","WHILE"); return(WHILE); }
"_Alignas"                              { Node("alignas ","ALIGNAS"); return ALIGNAS; }
"_Alignof"                              { Node("alignof ","ALIGNOF"); return ALIGNOF; }
"_Atomic"                               { Node("atomic ","ATOMIC"); return ATOMIC; }
"_Bool"                                 { Node("bool ","BOOL"); return BOOL; }
"_Complex"                              { Node("complex ","COMPLEX"); return COMPLEX; }
"_Generic"                              { Node("generic ","GENERIC"); return GENERIC; }
"_Imaginary"                            { Node("imaginary ","IMAGINARY"); return IMAGINARY; }
"_Noreturn"                             { Node("noreturn ","NORETURN"); return NORETURN; }
"_Static_assert"                        { Node("static ","STATIC_ASSERT"); return STATIC_ASSERT; }
"_Thread_local"                         { Node("thread ","THREAD_LOCAL"); return THREAD_LOCAL; }
"__func__"                              { Node("func ","FUNC_NAME"); return FUNC_NAME; }

{L}{A}*					{ return check_type(); }

{HP}{H}+{IS}?				{ Node(yytext,"I_CONSTANT"); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ Node(yytext,"I_CONSTANT"); return I_CONSTANT; }
"0"{O}*{IS}?				{ Node(yytext,"I_CONSTANT"); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ Node(yytext,"I_CONSTANT"); return I_CONSTANT; }

{D}+{E}{FS}?				{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?		{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?		{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ Node(yytext,"F_CONSTANT"); return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{Node(yytext,"STRING_LITERAL"); return STRING_LITERAL; }
"<"[a-zA-Z.]*">"						{Node(yytext,"STD_LIBRARY"); return STD_LIBRARY; }

"..."					{ Node("... ","ELLIPSIS"); return ELLIPSIS; }
">>="					{ Node(">>= ","RIGHT_ASSIGN"); return RIGHT_ASSIGN; }
"<<="					{ Node("<<= ","LEFT_ASSIGN"); return LEFT_ASSIGN; }
"+="					{ Node("+= ","ADD_ASSIGN"); return ADD_ASSIGN; }
"-="					{ Node("-= ","SUB_ASSIGN"); return SUB_ASSIGN; }
"*="					{ Node("*= ","MUL_ASSIGN"); return MUL_ASSIGN; }
"/="					{ Node("/= ","DIV_ASSIGN"); return DIV_ASSIGN; }
"%="					{ Node("%= ","MOD_ASSIGN"); return MOD_ASSIGN; }
"&="					{ Node("&= ","AND_ASSIGN"); return AND_ASSIGN; }
"^="					{ Node("^= ","XOR_ASSIGN"); return XOR_ASSIGN; }
"|="					{ Node("|= ","OR_ASSIGN"); return OR_ASSIGN; }
">>"					{ Node(">> ","RIGHT_OP"); return RIGHT_OP; }
"<<"					{ Node("<< ","LEFT_OP"); return LEFT_OP; }
"++"					{ Node("++ ","INC_OP"); return INC_OP; }
"--"					{ Node("-- ","DEC_OP"); return DEC_OP; }
"->"					{ Node("-> ","PTR_OP"); return PTR_OP; }
"&&"					{ Node("&& ","AND_OP"); return AND_OP; }
"||"					{ Node("|| ","OR_OP"); return OR_OP; }
"<="					{ Node("<= ","LE_OP"); return LE_OP; }
">="					{ Node(">= ","GE_OP"); return GE_OP; }
"=="					{ Node("== ","EQ_OP"); return EQ_OP; }
"!="					{ Node("!= ","NE_OP"); return NE_OP; }
";"					{ Node("; ","';'"); return ';'; }
("{"|"<%")			{ Node("{ ","'{'"); return '{'; }
("}"|"%>")			{ Node("} ","'}'"); return '}'; }
","					{ Node(", ","','"); return ','; }
":"					{ Node(": ","':'"); return ':'; }
"="					{ Node("= ","'='"); return '='; }
"("					{ Node("( ","'('"); return '('; }
")"					{ Node(") ","')'"); return ')'; }
("["|"<:")			{ Node("] ","'['"); return '['; }
("]"|":>")			{ Node("[ ","']'"); return ']'; }
"."					{ Node(". ","'.'"); return '.'; }
"&"					{ Node("& ","'&'"); return '&'; }
"!"					{ Node("! ","'!'"); return '!'; }
"~"					{ Node("~ ","'~'"); return '~'; }
"-"					{ Node("- ","'-'"); return '-'; }
"+"					{ Node("+ ","'+'"); return '+'; }
"*"					{ Node("* ","'*'"); return '*'; }
"/"					{ Node("/ ","'/'"); return '/'; }
"%"					{ Node("% ","'%'"); return '%'; }
"<"					{ Node("< ","'<'"); return '<'; }
">"					{ Node("> ","'>'"); return '>'; }
"^"					{ Node("^ ","'^'"); return '^'; }
"|"					{ Node("| ","'|'"); return '|'; }
"?"					{ Node("? ","'?'"); return '?'; }

{WS}+					{ /* whitespace separates tokens */ }
"\n"				{nextline(); prev = NULL; printf("\n");}
.					{; }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment(void)
{
    int c;

    while ((c = input()) != 0){
		if (c == '\n')
		{	
			nextline();
		}
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
	}
    yyerror("unterminated comment");
}

static void prep(void)
{
	int c;
	
	while ((c = input()) != '\n' && (c != 0))
	{;}
	if (c == '\n')
		nextline();
		return;
	if (c == 0)
		yyerror("unterminated preprocessor command");
}

static int check_type(void)
{
	push(&init, NULL, yytext);
	switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:	/* previously defined */
        Node(yytext,"TYPEDEF_NAME");
		return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:	/* previously defined */
        Node(yytext,"ENUMERATION_CONSTANT");
		return ENUMERATION_CONSTANT;
    default:	/* includes undefined */
        Node(yytext,"IDENTIFIER");
		return IDENTIFIER;
    }
}
