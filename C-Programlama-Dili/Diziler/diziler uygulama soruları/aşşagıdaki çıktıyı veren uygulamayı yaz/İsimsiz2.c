#include<stdio.h>
main()
{
	int x,y,n,satir;
	printf("Lutfen satir sayisi gir=");
	scanf("%d",&satir);
	
	for(x=1;x<=satir;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d",y);
			
		}
		printf("\n");
	}
}
