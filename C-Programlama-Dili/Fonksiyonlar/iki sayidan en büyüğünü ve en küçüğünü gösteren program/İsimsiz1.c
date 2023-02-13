#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;	
}
int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;	
}
main()
{	
	int x,y,enb, enk;
	printf("Lutfen ilk sayiyi giriniz=");
	scanf("%2d",&x);
	printf("Lutfen ikinci sayiyi giriniz=");
	scanf("%2d",&y);
	enb=max(x,y);
	printf("En buyuk sayi=%2d\n",enb);
	enk=min(x,y);
	printf("En kucuk sayi=%2d",enk);
	return 0;
}
