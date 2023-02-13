#include<stdio.h>
main()
{
	printf("Bu Program 1-100 arasi sayilarin 7 ile kalansiz bolunen sayilari gosteriyor");
	int a[100];
	int x,sayac=0;
	for(x=1;x<101;x++)
	{
		if(x%7==0)
		{
			printf("%d\n",x);
			sayac=sayac+1;
		}
	}
	printf("Toplamda %d sayi 7 ile kalansiz bolunuyor ",sayac);
}
