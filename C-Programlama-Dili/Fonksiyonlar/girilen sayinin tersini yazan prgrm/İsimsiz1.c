/*Kullan�c�n�n Girdi�i say�n�n tersini bulan program�
fonksiyon kullanarak yaz�n�z.*/
#include<stdio.h>
int sayinin_tersi(int sayi)
{
	int en_sagdaki_rakam;
	int sonuc=0;
	while(sayi>0)
	{
		int en_sagdaki_rakam=sayi%10;
		sonuc=sonuc*10+en_sagdaki_rakam;
		sayi/=10;	
	}
	return sonuc;
}
void main()
{
int sayi, tersi;
printf("Bir Sayi Gir \n");
scanf("%d", &sayi);
tersi=sayinin_tersi(sayi);
printf("Girilen %d sayisinin tersi %d ", sayi, tersi);
}
