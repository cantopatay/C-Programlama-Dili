#include<stdio.h>
main()
{
	int a[10],b[10],x,y;
	//A D�Z�S�N�N ELEMANLARININ OKUNMASI
	for(x=0;x<10;x++)
	{
		printf("A[%d]=",x);
		scanf("%d",&a[x]);
   }
		y=0;
	    for(x=0;x<10;x++)
		{ if(a[x]%2==1)
		    {
			b[y]=a[x];
			y++;
		}	
		}
		//B D�Z�S�N�N YAZDIRILMASI
		for(x=0;x<y;x++)
		printf("%d,",b[x]);
	getch();
	
}
