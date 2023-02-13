#include<stdio.h>
void rectangle(int a,int b, int*area,int*perimeter)
{
perimeter=2*(a+b);
area=a*b;
printf(" dikdortgenin alani:%d\n dikdortgenin cevresi:%d",area,perimeter);
}
main()
{
	int uzun,kisa,alan,cevre;
    printf(" uzun kenari giriniz:");
    scanf("%d",&uzun);
    printf(" kisa kenari giriniz:");
    scanf("%d",&kisa);

	rectangle( uzun,kisa,&alan,&cevre);
	
	
	
	
}
