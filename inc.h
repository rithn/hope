#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *tok;
	char *type;
	struct node *next;
	struct node *prev;
} node;

typedef struct infonode {
	char *tok;
	int loc;
	struct infonode *next;
} infonode;

typedef struct line {
	int n;
	struct node *start;
} line;

typedef struct simplenode {
	int n;
	struct simplenode *next;
} simplenode;

extern FILE *yyin;

extern node *first, *last, *prev;
extern int ln, currloc, currline;

extern line *linearr;
extern infonode *infarr[1009]; 
extern infonode *rec;

extern simplenode *moves;

//functions start here-------------------------------

void disp(int ln1, int ln2, int dispwordcurr);

node *nav(int loc);

void push(infonode **top, infonode *inf, char *tok);

void addinfo(infonode *inf);

void record(infonode *inf, char *type);

void insert(unsigned long i, char *tok, int loc);

void disphsh(void);

int searchhsh(char *tok);

void pop(infonode **top, char *type);

void dispstk(infonode *top);

unsigned long hash(unsigned char *str);

void nextline(void);

void Node(char *tok, char type[]);

void disp(int ln1, int ln2, int dispwordcurr);

int linect(FILE *fopen);

void intpush(simplenode **top, int val);



