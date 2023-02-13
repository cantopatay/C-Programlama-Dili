#include <stdio.h>
main()
{/*Kullanýcýdan 5 adet sayý alýp bir dizide saklayan ve 
girilen sayýlardan çift olanlarýn toplamýný bulan program*/
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
