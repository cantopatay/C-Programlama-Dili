#include<stdio.h>
void main()
{
  int x;
  printf("yasinizi giriniz\n");
  scanf("%d",&x);
  switch(x)
{
case 18:
printf("Resitsin");
break;
 case 30:
printf("yaslanýyosun");
break; 
case 60:
printf("artýk yaslýsýn");
break; 
default:
	printf("yanlýs bir secim");
	break;
}
}
