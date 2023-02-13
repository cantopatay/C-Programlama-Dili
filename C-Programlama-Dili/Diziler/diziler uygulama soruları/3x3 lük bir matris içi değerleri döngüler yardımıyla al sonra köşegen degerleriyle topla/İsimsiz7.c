#include<stdio.h>
main()
{
	int a[3][3];
	int x,y,toplam;
	printf("LUTFEN DEGER GIRINIZ\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("a[%d][%d]=",x,y);
			scanf("%d",&a[x][y]);
			
		}
	}
	for(x=0;x<3;x++)
	{toplam=toplam+a[x][x];}
	printf("Kosegenlerin Toplami=%d",toplam);
	getch();
}
