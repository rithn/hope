








// main function
int main(int argc, char *argv[])
{
	if (first != NULL)
		nextline();
	
	// all information of important guys is now in rec, storing it in hashtable and updating structure
	locnode *store = rec;
	while (store)
	{
		addinfo(store);
		store = store->next;
	}
	
	// printing for debugging
	printf("$$$$$$$$$$$\n");
	disp(0,ln, 0);
	printf("$$$$$$$$$$$\n");
	
	printf("\n");
	dispstk(init);
	dispstk(rec);
	disphsh();
	
	// interface starts here	
	printf("press j to jump to first def, b to go back, w to go up, s to go down, a to go left, b to go right and x to exit\n");
	disp(0,1,0);
	int displinecurr = 0, dispwordcurr = 0; 
	char c;
	node *jump;
	scanf(" %c",&c);
	while (c != 'x')
	{
		switch(c){
				case 'w': if (displinecurr)
					displinecurr--;
				break;
				case 's' : if (displinecurr < ln-1) 
					displinecurr++;
				break;
				case 'd' : if (dispwordcurr < (*(linearr+displinecurr)).n - 1)
					dispwordcurr++;
				break;
				case 'a' : if (dispwordcurr > 0)
					dispwordcurr--;
				break;
				case 'j' :
					jump = nav(displinecurr*100 + dispwordcurr);
					int jumploc = searchhsh(jump->tok);
					if (jumploc == -1)
						printf("No definition found\n\n");
					else if (jumploc == displinecurr)
						printf("First definition in current line\n\n");
					else {
						intpush(&moves, displinecurr*100 + dispwordcurr);
						displinecurr = jumploc;
						dispwordcurr = 0;
					}
				break;
				case 'b':
					if (moves == NULL){
						printf("Reached original position\n");
						break;
					}
					printf("back move: %d\n",moves->n);
					displinecurr = (moves->n)/100;
					dispwordcurr = (moves->n)%100;
					moves = moves->next;
				break;
			}
			disp(displinecurr,displinecurr+1, dispwordcurr);
		
		printf("press j to jump to first def, b to go back, w to go up, s to go down, a to go left, b to go right and x to exit\n");
		scanf(" %c",&c);
		
	}
	
	fclose(yyin);
}
