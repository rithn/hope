typedef struct node {
	char *tok;
	int type;
	struct node *next;
	struct node *prev;
} node;

typedef struct infonode {
	int loc;
	int type;
	struct infonode *next;
} infonode;

typedef struct line {
	int n;
	node *start;
} line;

void disp(line *linearr, int ln);

