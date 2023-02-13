#include <stdio.h>
#define T 20
main()
{
	int fib[T];
	int x;
	fib[0]=1;
	fib[1]=1;
	for(x=2;x<20;x++)
	fib[x]=fib[x-1]+fib[x-2];
	for(x=0;x<20;x++)
	printf("%d.dizinin degeri=%2d\n",x+1,fib[x]);
	
}
