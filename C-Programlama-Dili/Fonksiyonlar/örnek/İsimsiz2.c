#include<stdio.h>
int sayac=0;//b�t�n bloklar�n d���nda oldu�undan global bir de�isken
//int fonksiyon(void);
main()
{
	sayac++;//global de�isken
	printf("\n\nfonksiyon cagirilmadan once sayac�n degeri=%2d",sayac);
	fonksiyon();//fonksiyon cagirildi
	printf("fonksiyon cagirildiktan sonraki sayavin degeri=%2d",sayac);	
}
int fonksiyon(void)
{
	int sayac=10;//yerel de�isken
printf("\tfonksiyonun icinde sayacin degeri=%2d",sayac);
}

