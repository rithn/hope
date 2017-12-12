#include "inc.h"

FILE *yyin;

node *first = NULL;
node *last = NULL;
node *prev = NULL;

int ln, currloc = 0, currline = 0;

line *linearr;
infonode *infarr[1009]; 
infonode *rec = NULL;

simplenode *moves = NULL;

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
		if (tok){
			newnode->tok = malloc(strlen(tok)+1);
			strcpy(newnode->tok,tok);
		}
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
	printf("loc: %d, n: %d\n", inf->loc, (*(linearr + (inf->loc/100))).n);
	(*(linearr + (inf->loc/100))).n += 1;
	printf("loc: %d, n: %d\n", inf->loc, (*(linearr + (inf->loc/100))).n);
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
