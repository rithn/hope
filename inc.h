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

void disp(int ln1, int ln2, int dispwordcurr);

