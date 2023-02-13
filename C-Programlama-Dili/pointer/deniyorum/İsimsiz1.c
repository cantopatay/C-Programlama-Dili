#include<stdio.h>
#include<string.h>
main()
{
char sayi1[10]="Merhaba";
char sayi2[]="Dunya";
char *sayi3[10];
int uzunluk;
strcpy(sayi3,sayi1);
printf("sayi3=%s\n",sayi3);
strcat(sayi1,sayi2);
printf("sayi1:%s\n",sayi1);
uzunluk=strlen(sayi1);
printf("sayi1'in uzunlugu=%d",uzunluk);

}
