#include <stdio.h>
void takas(int *x, int *y)
{
int z;
z = *x;
*x = *y;
*y = z;
}
int main()
{
int a, b;
a=22; b=33;
printf("takas oncesi : a=%d b=%d\n",a,b);
takas(&a, &b);
printf("takas sonrasi: a=%d b=%d\n",a,b);
return 0;
}

