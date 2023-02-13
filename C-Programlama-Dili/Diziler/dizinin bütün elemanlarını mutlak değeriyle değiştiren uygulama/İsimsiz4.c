#include<stdio.h>
main()
{
	int a[]={-16,71,-18,-4,10};
	int x;
		for(x=0;x<5;x++)
	{
		if(a[x]<0)
		a[x]*=-1;
		
	}
	for(x=0;x<5;x++)
	{
		printf("%5d\n",a[x]);
	}

	getch();	
}
