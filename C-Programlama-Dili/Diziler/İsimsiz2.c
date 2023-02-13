#include<stdio.h>
main()
{
	int ogr[8];
	int x,toplam;
	float ortalama;
	printf("Lutfen Ogrenci Notlarini Giriniz\n");
	for(x=1;x<9;x++)
	{
		printf("%d.ogrenci=",x);
		scanf("%d",&ogr[x]);
	}
	toplam=0;
	for(x=1;x<9;x++)
	{
		toplam=toplam+ogr[x];
	}
		printf("TOPLAMI=%d \n",toplam);
		ortalama=toplam/8.0;
		printf("Notlarin ortalamasi =%f",ortalama);
		getch();
		
}
