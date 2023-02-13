#include<stdio.h>
main()
{
	int kisakenar,uzunkenar,x,y;
	printf("kisakenari giriniz:\n");
	scanf("%d",&kisakenar);
	printf("uzunkenari giriniz:\n");
	scanf("%d",&uzunkenar);
	for(x=1; x<=kisakenar; x++)
	{
		for(y=1; y<=uzunkenar; y++)
		{
		printf("*");
		}
		printf("\n");
	}
	getch();
}
