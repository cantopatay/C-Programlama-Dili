#include<stdio.h>
main()
{
	char a[]={'x','y','z'};
	char *ptr;
	int x;
	ptr=&a;
	for(x=0;x<strlen(a);x++)
	{printf("a[%d]:%c\n",x,*(a+x));}
	
	for(x=0;x<strlen(a);x++)
	printf("a[%d] adresi:%p\n",x,ptr);
}
