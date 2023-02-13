#include<stdio.h>
void main()
{

	int ara, final, basari;
	
	printf("Ara sinav ve final notlarinizi giriniz\n");
    scanf("%d%d",&ara ,&final);
    basari=ara*30/100+final*70/100;
    if(basari>=60)
    {
	printf("bravo gectin karesim.\n basari notun=%d", basari);
    }
    else
    printf("kaldin kardesim gecmis olsun\n basari notun=%d", basari);
	getch();
}
