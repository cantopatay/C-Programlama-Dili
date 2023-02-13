#include<stdio.h>
main()
{
	int not[5][3];
	int x,y,toplam;
	float ortalama;
	//KULLANICIDAN NOTLARIN ALINMASI
	for(x=1;x<6;x++)
	{
		printf("%d.ogrencinin notlari=",x);
		for(y=0; y<3; y++)
		{scanf("%d",&not[x][y]);}
	}
	for(y=0;y<3;y++)
	{
	toplam=0;
	for(x=1;x<6;x++)
	{
		toplam=toplam+not[x][y];
	}
	ortalama=toplam/5.0;
	printf("%d. Not ortalamasi=%f dir\n",y+1,ortalama);
    }	
	getch();
}
