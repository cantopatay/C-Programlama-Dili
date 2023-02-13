#include <stdio.h>
void main() 
{
	int tablo[3][4] = { {8, 16}, {3, 15, 27} };
	int i, j;
 	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) 
		{
		printf("%5d", tablo[i][j]);
		}
		printf("\n");
	}
}


