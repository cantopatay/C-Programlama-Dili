#include<stdio.h>
main()
{
	int a[10];
	int i,enk;
	for(i=0;i<10;i++)
	{
	printf("a[%d]",i);
	scanf("%d",&a[i]);
	}
	enk=a[0];
	for(i=0;i<10;i++)
	if(a[i]<enk)
	enk=a[i];
	printf("dizinin en küçük elemaný %d dir",enk);
	
}
