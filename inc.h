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
	node *start;
} line;

void disp(line *linearr, int ln);

