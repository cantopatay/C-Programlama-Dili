#include <stdio.h>
main()
{
char isim[10][30];
int i;
for (i=0;i<10;i++)
{
printf("%d.ismi gir\n", i+1);
gets(isim[i]);
}
for(i=9;i>=0;i--)
{
printf("%d.isim %s \n", i+1, isim[i]);
}
}
