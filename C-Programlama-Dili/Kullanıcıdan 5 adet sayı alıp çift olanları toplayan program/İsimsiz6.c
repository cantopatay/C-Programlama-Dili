#include <stdio.h>
main()
{/*Kullan�c�dan 5 adet say� al�p bir dizide saklayan ve 
girilen say�lardan �ift olanlar�n toplam�n� bulan program*/
	int a[5];
	int x;
	int toplam=0;
	for(x=0;x<5;x++)
	{
	printf("a[%d]=",x+1);
	scanf("%d",&a[x+1]);
	printf("\n");
    }
    for(x=0;x<5;x++)
    {
    	if(a[x+1]%2==0)
    	toplam=toplam+a[x+1];
	}
	printf("Cift sayilarin toplami=%2d",toplam);
	
}
