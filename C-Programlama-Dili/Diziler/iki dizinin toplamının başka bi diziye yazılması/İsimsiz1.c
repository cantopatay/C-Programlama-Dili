#include <stdio.h>
main()
{
	int a[5],b[5],c[5];
	int i;
	printf("A disinin elemanlarini giriniz\n");
	for(i=0; i<5; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("B disinin elemanlarini giriniz\n");
	for(i=0; i<5; i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	//iki dizinin elemanlarýnýn toplanmasý
	for(i=0;i<5;i++){
		c[i]=a[i]+b[i];
	}
	// c dizisinin yazdýrýlmasý
	for(i=0;i<5;i++){
		printf("%d\t",c[i]);
	}
}
