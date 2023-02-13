#include<stdio.h>
main()
{
	int a[5];
	printf("degerleri giriniz\n");
	int x;
	for(x=0;x<5;x++)
	scanf("%d",a+x);
	printf("girdiginiz elemanlar\n");
	for(x=0;x<5;x++)
	printf("%d\n",*(a+x));
	return 0;
}
