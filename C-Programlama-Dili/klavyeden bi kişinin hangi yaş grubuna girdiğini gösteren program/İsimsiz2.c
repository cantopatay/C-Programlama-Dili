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
printf("yaslan�yosun");
break; 
case 60:
printf("art�k yasl�s�n");
break; 
default:
	printf("yanl�s bir secim");
	break;
}
}
