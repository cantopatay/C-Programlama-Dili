#include<stdio.h>
void main()
{
//Deðerleri tutacagimiz "a" adýnda bir dizi oluþturuyoruz
	float a[10];
	float ortalama,toplam=0;
	float ort_alti_eleman=0;
	float ort_ustu_eleman=0;
	int x;
	//kullanýcýlar dizinin elemanlarýný giriyor
	for(x=1;x<11;x++)
	{
	printf("a[%d]=",x);
	scanf("%f",&a[x]);
	toplam=toplam+a[x];
	}
	//dizinin ortalamasý hesaplanýyor
	ortalama=toplam/10.0;
	//ortalamadan kücük ve büyük kac adet eleman oldugu belirleniyor
	for(x=1;x<11;x++)
	{
		if(a[x]<ortalama)
		ort_alti_eleman++;
		else if(a[x]>ortalama)
		ort_ustu_eleman++;	
	}
	printf("Toplami=%2f\n",toplam);
	printf("ortalamasi=%2f\n",ortalama);
	printf("ortalama altý eleman sayisi=%2f\n",ort_alti_eleman);
	printf("ortalama ustu eleman sayisi=%2f\n",ort_ustu_eleman);
	
}
