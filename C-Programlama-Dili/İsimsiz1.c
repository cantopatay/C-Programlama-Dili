#include <stdio.h>
void main()
{
int sayi, kalan, sonuc;
printf("Bir sayi giriniz \n");
scanf("%d", &sayi);
kalan=sayi%3;
switch(kalan)
{
case 0:
sonuc=2*kalan+5;
printf("Kalan miktari %d dir.\nKalanin 2 katinin 5 fazlasi = %d \n", kalan, sonuc);
break;
case 1:
sonuc=2*kalan+5;
printf("Kalan miktari %d dir.\nKalanin 2 katinin 5 fazlasi = %d \n", kalan, sonuc);
break;
case 2:
sonuc=2*kalan+5;
printf("Kalan miktari %d dir.\nKalanin 2 katinin 5 fazlasi = %d \n", kalan, sonuc);
break;
default:
printf("hatali islem");
break;
}
}
