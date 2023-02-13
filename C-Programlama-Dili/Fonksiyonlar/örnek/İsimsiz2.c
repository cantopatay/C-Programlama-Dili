#include<stdio.h>
int sayac=0;//bütün bloklarýn dýþýnda olduðundan global bir deðisken
//int fonksiyon(void);
main()
{
	sayac++;//global deðisken
	printf("\n\nfonksiyon cagirilmadan once sayacýn degeri=%2d",sayac);
	fonksiyon();//fonksiyon cagirildi
	printf("fonksiyon cagirildiktan sonraki sayavin degeri=%2d",sayac);	
}
int fonksiyon(void)
{
	int sayac=10;//yerel deðisken
printf("\tfonksiyonun icinde sayacin degeri=%2d",sayac);
}

