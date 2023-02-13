#include<stdio.h>
void main()
{

	int ara, final, basari;
	
	printf("Ara sinav ve final notlarinizi giriniz\n");
    scanf("%d%d",&ara ,&final);
    basari=ara*30/100+final*70/100;
    if(basari>=60)
    {
	printf("bravo gectin karesim.\n basarý notun=%d", basari);
    }
    else
    printf("kaldýn kardesim gecmýs olsun\n basarý notun=%d", basari);
	getch();
}
