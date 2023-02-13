#include<stdio.h>
int topla(int a, int b)//Fonksiyonu burda tanýmladým
{
	int c=a+b;
	return c;
}
main()
{	int i;
	printf("Lutfen Bir Sayi Giriniz\n");
	scanf("%d",&i);
	printf("Girdigin sayi=%2d\n",i);
	i=topla(i,i);//Fonksiyon burda çalýþtýrýlýyor
	printf("Islemin Sonucu=%2d",i);
	
	
}
