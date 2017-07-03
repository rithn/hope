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
extern void *nextline(void);

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

extern void *Node(char *tok);

static void comment(void);
static void prep(void);
static int check_type(void);
%}

%%
"/*"                                    { comment(); }
"#"										{ prep(); }
"//".*                                    { /* consume //-comment */ }

"auto"					{ Node("auto "); return(AUTO); }
"break"					{ Node("break "); return(BREAK); }
"case"					{ Node("case "); return(CASE); }
"char"					{ Node("char "); return(CHAR); }
"const"					{ Node("const "); return(CONST); }
"continue"				{ Node("continue "); return(CONTINUE); }
"default"				{ Node("default "); return(DEFAULT); }
"do"					{ Node("do "); return(DO); }
"double"				{ Node("double "); return(DOUBLE); }
"else"					{ Node("else "); return(ELSE); }
"enum"					{ Node("enum "); return(ENUM); }
"extern"				{ Node("extern "); return(EXTERN); }
"float"					{ Node("float "); return(FLOAT); }
"for"					{ Node("for "); return(FOR); }
"goto"					{ Node("goto "); return(GOTO); }
"if"					{ Node("if "); return(IF); }
"inline"				{ Node("inline "); return(INLINE); }
"int"					{ Node("int "); return(INT); }
"long"					{ Node("long "); return(LONG); }
"register"				{ Node("register "); return(REGISTER); }
"restrict"				{ Node("restrict "); return(RESTRICT); }
"return"				{ Node("return "); return(RETURN); }
"short"					{ Node("short "); return(SHORT); }
"signed"				{ Node("signed "); return(SIGNED); }
"sizeof"				{ Node("sizeof "); return(SIZEOF); }
"static"				{ Node("static "); return(STATIC); }
"struct"				{ Node("struct "); return(STRUCT); }
"switch"				{ Node("switch "); return(SWITCH); }
"typedef"				{ Node("typedef "); return(TYPEDEF); }
"union"					{ Node("union "); return(UNION); }
"unsigned"				{ Node("unsigned "); return(UNSIGNED); }
"void"					{ Node("void "); return(VOID); }
"volatile"				{ Node("volatile "); return(VOLATILE); }
"while"					{ Node("while "); return(WHILE); }
"_Alignas"                              { Node("alignas "); return ALIGNAS; }
"_Alignof"                              { Node("alignof "); return ALIGNOF; }
"_Atomic"                               { Node("atomic "); return ATOMIC; }
"_Bool"                                 { Node("bool "); return BOOL; }
"_Complex"                              { Node("complex "); return COMPLEX; }
"_Generic"                              { Node("generic "); return GENERIC; }
"_Imaginary"                            { Node("imaginary "); return IMAGINARY; }
"_Noreturn"                             { Node("noreturn "); return NORETURN; }
"_Static_assert"                        { Node("static "); return STATIC_ASSERT; }
"_Thread_local"                         { Node("thread "); return THREAD_LOCAL; }
"__func__"                              { Node("func "); return FUNC_NAME; }

{L}{A}*					{ Node(yytext); return check_type(); }

{HP}{H}+{IS}?				{ Node(yytext); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ Node(yytext); return I_CONSTANT; }
"0"{O}*{IS}?				{ Node(yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ Node(yytext); return I_CONSTANT; }

{D}+{E}{FS}?				{ Node(yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?		{ Node(yytext); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ Node(yytext); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ Node(yytext); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?		{ Node(yytext); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ Node(yytext); return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{Node(yytext); return STRING_LITERAL; }

"..."					{ Node("... "); return ELLIPSIS; }
">>="					{ Node(">>= "); return RIGHT_ASSIGN; }
"<<="					{ Node("<<= "); return LEFT_ASSIGN; }
"+="					{ Node("+= "); return ADD_ASSIGN; }
"-="					{ Node("-= "); return SUB_ASSIGN; }
"*="					{ Node("*= "); return MUL_ASSIGN; }
"/="					{ Node("/= "); return DIV_ASSIGN; }
"%="					{ Node("%= "); return MOD_ASSIGN; }
"&="					{ Node("&= "); return AND_ASSIGN; }
"^="					{ Node("^= "); return XOR_ASSIGN; }
"|="					{ Node("|= "); return OR_ASSIGN; }
">>"					{ Node(">> "); return RIGHT_OP; }
"<<"					{ Node("<< "); return LEFT_OP; }
"++"					{ Node("++ "); return INC_OP; }
"--"					{ Node("-- "); return DEC_OP; }
"->"					{ Node("-> "); return PTR_OP; }
"&&"					{ Node("&& "); return AND_OP; }
"||"					{ Node("|| "); return OR_OP; }
"<="					{ Node("<= "); return LE_OP; }
">="					{ Node(">= "); return GE_OP; }
"=="					{ Node("== "); return EQ_OP; }
"!="					{ Node("!= "); return NE_OP; }
";"					{ Node("; "); return ';'; }
("{"|"<%")			{ Node("{ "); return '{'; }
("}"|"%>")			{ Node("} "); return '}'; }
","					{ Node(", "); return ','; }
":"					{ Node(": "); return ':'; }
"="					{ Node("= "); return '='; }
"("					{ Node("( "); return '('; }
")"					{ Node(") "); return ')'; }
("["|"<:")			{ Node("] "); return '['; }
("]"|":>")			{ Node("[ "); return ']'; }
"."					{ Node(". "); return '.'; }
"&"					{ Node("& "); return '&'; }
"!"					{ Node("! "); return '!'; }
"~"					{ Node("~ "); return '~'; }
"-"					{ Node("- "); return '-'; }
"+"					{ Node("+ "); return '+'; }
"*"					{ Node("* "); return '*'; }
"/"					{ Node("/ "); return '/'; }
"%"					{ Node("% "); return '%'; }
"<"					{ Node("< "); return '<'; }
">"					{ Node("> "); return '>'; }
"^"					{ Node("^ "); return '^'; }
"|"					{ Node("| "); return '|'; }
"?"					{ Node("? "); return '?'; }

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

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
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
	switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}