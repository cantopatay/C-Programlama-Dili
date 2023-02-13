#include <stdio.h>
main()
{
	int satir,x,y;
	printf("satir numarasýný giriniz");
	scanf("%d",&satir);
	for(x=1; x<=satir;x++)
	{
		for(y=1;y<=x; y++)
		{
			printf("*");
			
		}
			printf("\n");
	}
		getch();
	}


