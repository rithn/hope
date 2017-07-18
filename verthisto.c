#include <stdio.h>

int main()
{
	int letterf[26];
	int copy[26];
	int c,i;
	
	for (i=0;i<26;i++)
	{
		letterf[i]=0;
	}
	
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		if (c >= 'a' && c <= 'z')
			++letterf[c - 'a'];
	}
	printf("\n");
	
	int max = 0;
	for (i = 0; i < 26; i+=1)
	{
		if (letterf[i]>max)
			max = letterf[i];
	}	
	
	for (i = 0; i < 26; i+=1)
	{
		copy[i]=letterf[i];
	}
	
	for(i = max; i >= 1; i-=1)
	{
		int j;
		for (j = 0; j < 26; ++j)
		{
			printf("  ");
			if (letterf[j]==i)
			{
				letterf[j]-=1;
				printf("x");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	for (i=0;i<26;i++)
	{
		printf("  %d",copy[i]);
	}
	printf("\n");
	
	for (i=0;i<26;i++)
	{
		printf("  %c",i+'a');
	}
	printf("\n");
}