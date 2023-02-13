#include<stdio.h>
void main()
{
	//sadece 1e ve kendisine bölünen sayi 
	//asal sayidir
	int sayi;
	printf("Lutfen bir sayi gir=");
	scanf("%d",&sayi);
	printf("\n");
	
	int x;
	int bolensayisi=0;
	for(x=2;x<sayi;x++)
	{
		//mod islemi
		if(sayi%x==0)
		{
			printf("Boleni:%d\n",x);
			bolensayisi++;
		}
	}
	if(bolensayisi>0)
	printf("Asal sayi degildir\n");
	else
		printf("Asal sayidir\n");
		getch();
}
