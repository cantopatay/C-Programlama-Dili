#include<stdio.h>
main()
{
	int a[3][3];
	int x,y,enb,enk;
	for(x=0;x<3;x++)
	{
		for(y=0; y<3; y++)
		{
			printf("a[%d][%d]=",x,y);
			scanf("%d",&a[x][y]);
	    }
    }
	enb=a[0][0];
	enk=a[0][0];
	for(x=0;x<3;x++)
	{
		for(y=0; y<3;y++)
		{
			if(enb<a[x][y])
			enb=a[x][y];
			if(enk>a[x][y])
			enk=a[x][y];
		}
	}
		printf("Dizinin en kucuk sayisi= %d\nDizinin en buyuk sayisi= %d",enk,enb);
}
