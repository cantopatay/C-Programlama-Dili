#include<stdio.h>
main()
{
	int x,y,deg;
	int a[9]={21,15,56,-34,-65,98,67,2,18};
	for(x=0;x<9;x++)
	{
		for(y=8;y>x;y--)
		{
			if(a[y]<a[y-1])//e�er y eleman� (y-1) eleman�ndan k���kse yer de�i�tir
			{
				deg=a[y-1];
				a[y-1]=a[y];
				a[y]=deg;
			}
		}
	}
	for(x=0;x<9;x++)
	printf("%5d\n",a[x]);
	getch();

}
