#include<stdio.h>
main()
{
	int a[5]={7,3,66,75,-3};
	int x,y,temp;
    for(x=0;x<5;x++)
    {
    	for(y=4;y>x;y--)
		{
			if(a[y]<a[y-1])//eðer y elemaný (y-1) elemanýndan küçükse yer deðiþtir
			{
				temp=a[y-1];
				a[y-1]=a[y];
				a[y]=temp;
			}
		}
	}
	for(x=0;x<5;x++)
	printf("%3d\n",a[x]);
	getch();
}
