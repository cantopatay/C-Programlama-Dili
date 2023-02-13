#include<stdio.h>
main()
{
	int x,y;
	int a[3][3]={1,2,3,4,5,6,7,8,9}; //bunun gibide sıralanabilir
	int b[3][3]={{2,4,8},{3,6,9},{4,16,64}}; //bunun gibide
	int c[3][3];
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		c[x][y]=a[x][y]+b[x][y];
	}
	// C MATRİSİNİN YAZDIRILMASI
	for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			printf("%d-",c[x][y]);
			printf("\n");
		}
	
}
