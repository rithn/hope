#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//used in main structure
typedef struct node {
	char *tok;
	char *type;
	struct node *next;
	struct node *prev;
} node;

//used in hashtable
typedef struct locnode {
	char *tok;
	int loc;
	struct locnode *next;
} locnode;

typedef struct line {
	int n;
	struct node *start;
} line;

//used for simpler things
typedef struct files {
	char name[20];
	FILE *filePtr;
	int lnc;
	struct locnode *infarrc[1009];
	struct line *linearrc;
	struct files *next;
} files;

//used for simpler things
typedef struct simplenode {
	int n;
	struct simplenode *next;
} simplenode;

extern FILE *yyin;
extern files *filearr;		 
extern node *first, *last, *prev;
extern int ln, currloc, currline;

extern line *linearr;
extern locnode *infarr[1009]; 
extern locnode *rec;

extern simplenode *moves;

//-----------------------------functions start here-------------------------------

//returns number of lines from given file pointer
int linect(FILE *fopen);

// returns node which is at a particular location
node *nav(int detailloc);

// add info of tokens into structure and hashtable
void addinfo(locnode *inf);

//second push - needs to be removed
void record(locnode *inf, char *type);

// push simple node onto stack
void intpush(simplenode **top, int val);

// pushes location node 'inf' onto stack of location nodes, replaces text in inf with given string
void push(locnode **top, locnode *inf, char *tok);

//pops location node from given top pointer, also records data in second stack if suitable.
void pop(locnode **top, char *type);

// displays stack top to bottom
void dispstk(locnode *top);

// generates an unsigned long hash in the range 0-1008 from string
unsigned long hash(unsigned char *str);

// displays hashtable line by line word-wise.
void disphsh(void);

// returns location of a term in the hashtable (location means line number) if not found returns -1.
int searchhsh(char *tok);

// insert a location node with given data into hashtable
void inserthsh(unsigned long i, char *tok, int loc);

// goes to the next line - used while encoding data initially
void nextline(void);

// add a new node to structure with token information
void Node(char *tok, char type[]);

// print structure between line nos given(first-inclusive last-exclusive) with some node marked.
void disp(int ln1, int ln2, int dispwordcurr);




