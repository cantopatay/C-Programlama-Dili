#include<stdio.h>
main()
{
	int a[5]={7,3,66,75,-3};
	int x,y,temp;
    for(x=0;x<5;x++)
    {
    	for(y=4;y>x;y--)
		{
			if(a[y]<a[y-1])//e�er y eleman� (y-1) eleman�ndan k���kse yer de�i�tir
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
