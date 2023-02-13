#include <stdio.h>
int main(void)
{
	int i, n=5;
	for(i=20; i>=n; i=i-5)
	{
		if(i%3!=0)
		printf("*##*\n");
	}
		getch();
	}

