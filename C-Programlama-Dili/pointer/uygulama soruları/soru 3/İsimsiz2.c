#include<stdio.h>
main()
{
	int sayi[5], aktarilan[5];
	int x;
	printf("sayilari giriniz\n");
	for(x=0;x<5;x++)
	{   printf("sayi[%d]:",x);
		scanf("%d",sayi+x);
		aktarilan[x]=*(sayi+x);
	
	}
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
	for(x=0;x<5;x++)
	{  	printf("sayi[%d]:%d\n",x,*(sayi+x));	
	}
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\ \n");	
	for(x=0;x<5;x++)
	{ 	
		printf("aktarilan[%d]:%d\n",x,*(aktarilan+x));
	}
}
