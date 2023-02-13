#include<stdio.h>
degistirme(int*a,int*b,int*c)
{int d;
d=*c;
*c=*a;
*a=*b;
*b=d;

}
main()
{
	int x=3,y=5,z=7;
	degistirme(&x,&y,&z);
	printf("x:%d",x);
	printf("y:%d",y);
	printf("z:%d",z);
	
}
