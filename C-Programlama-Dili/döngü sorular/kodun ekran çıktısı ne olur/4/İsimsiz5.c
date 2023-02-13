#include <stdio.h>

void main()
{
	int x, n;
	x=6;n=0;
	while(x<=10)
	{
		n++;
		if(x>=9)
		printf("%2d",n);
		x+=2;
	}
	getch();
}
		
	
