#include "inc.h"

FILE *yyin;

node *first = NULL;
node *last = NULL;
node *prev = NULL;

int ln, currloc = 0, currline = 0;

line *linearr;
locnode *infarr[1009]; 
locnode *rec = NULL;

simplenode *moves = NULL;

//returns number of lines from given file pointer
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

// returns node which is at a particular location
node *nav(int detailloc)
{
	int line = detailloc/100, offset = (detailloc - line*100);
	node *going = (*(linearr+line)).start;
	for (int i = 0; i<offset; i++)
	{
		going = going->next;
	}
	return going;
}

// add info of tokens into structure and hashtable
void addinfo(locnode *inf)
{
	node *nd = nav(inf->loc);
	free(nd->type); 
	if (nd->next != NULL && strcmp(nd->next->type, "'('") == 0) {
		nd->type = malloc(9);
		strcpy(nd->type,"function");
	}
	else {
		nd->type = malloc(strlen(inf->tok)+1);
		strcpy(nd->type,inf->tok);
	}
	if (strcmp(nd->type, "declarator var") == 0)
	{
		unsigned long h = hash(nd->tok);
		inserthsh(h, nd->tok, (inf->loc)/100);
	}
}

// second push- needs to be removed
void record(locnode *inf, char *type)
{
	free(inf->tok);
	inf->tok = malloc(strlen(type)+1);
	strcpy(inf->tok,type);
	push(&rec, inf, type);
}

//push simple node onto stack
void intpush(simplenode **top, int val)
{
	if (top != NULL)
    {
        simplenode *newnode =(simplenode *)malloc(sizeof(simplenode));
		newnode->n = val;
		newnode->next = *top;
		*top = newnode;
    }
}

// pushes location node 'inf' onto stack of location nodes, replaces text in inf with given string
void push(locnode **top, locnode *inf, char *tok)
{
	if (top != NULL)
    {
        locnode *newnode =(locnode *)malloc(sizeof(locnode));
		if (inf == NULL)
		{
			newnode->loc = currloc;
		}
		else
		{
			newnode->loc = inf->loc;
		}
		if (tok){
			newnode->tok = malloc(strlen(tok)+1);
			strcpy(newnode->tok,tok);
		}
		newnode->next = *top;
		*top = newnode;
    }
}

//pops location node from given top pointer, also records data in second stack if suitable.
void pop(locnode **top, char *type)
{
	locnode *top1;
 
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

// displays stack top to bottom
void dispstk(locnode *top)
{
	printf("\ndispstk:\n");
	locnode *top1 = top;
 
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

// generates an unsigned long hash in the range 0-1008 from string
unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; 

    return hash%1009;
}

// displays hashtable line by line word-wise.
void disphsh(void)
{
	printf("\ndisphsh: \n");
	locnode *inf;
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

// returns location of a term in the hashtable (location means line number) if not found returns -1.
int searchhsh(char *tok)
{
	unsigned long h = hash(tok);
	locnode *sch = infarr[h];
	while (sch)
	{
		if (strcmp(sch->tok,tok) == 0)
			return sch->loc;
		sch = sch->next;
	}
	return -1;
}

// insert a location node with given data into hashtable
void inserthsh(unsigned long i, char *tok, int loc)
{
	locnode *inf = infarr[i];
	locnode *newinf = (locnode *) malloc(sizeof(locnode));
	newinf->next = inf;
	newinf->tok = malloc(strlen(tok)+1);
	strcpy(newinf->tok, tok);
	newinf->loc = loc;
	infarr[i] = newinf;
}

// goes to the next line - used while encoding data initially
void nextline(void)
{
	if (currline < ln-1){
		(*(linearr+currline)).start = first;
		first = NULL;
		last = NULL;
		prev = NULL;
		currline += 1;
		currloc = ((currloc/100)+1)*100;
	}
}

// add a new node to structure with token information
void Node(char *tok, char type[])
{
	currloc++;
	(*(linearr + (currloc/100))).n += 1;
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

// print structure between line nos given(first-inclusive last-exclusive) with some node marked. 
void disp(int ln1, int ln2, int dispwordcurr)
{
	int i, ctr;
	for (i = ln1; i<ln2; i++)
	{
		printf("%3d. %d tokens: \n",i,(*(linearr+i)).n);
		node *read = (*(linearr+i)).start;
		ctr = 0;
		for (; read; read = read->next)
		{
			printf("%s - %s%s\n",read->tok, read->type, (ctr == dispwordcurr)?" *":"");
			ctr++;
		}
		printf("\n\n");
	}
}


