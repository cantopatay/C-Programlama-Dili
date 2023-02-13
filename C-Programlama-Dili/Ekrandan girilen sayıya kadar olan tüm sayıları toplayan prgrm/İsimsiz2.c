#include<stdio.h>
main()
{
	int x,toplam=0;
	printf("Lutfen Bir Sayi Giriniz=");
	scanf("%2d",&x);
	for(x=x;x>=1;x--)
	{
		toplam=toplam+x;
	}
	printf("sayinin toplami=%2d",toplam);
	getch();
}
