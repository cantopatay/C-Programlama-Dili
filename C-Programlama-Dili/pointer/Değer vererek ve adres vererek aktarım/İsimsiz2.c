/* De�er vererek ve adres vererek aktar�m */
#include <stdio.h>
void f1(int ); /* iki fonksiyon */
void f2(int *);
int main()
{
int x = 55;
printf("x in degeri,\n");
printf("Fonksiyonlar cagrilmadan once: %d\n",x);
/* f1 fonksiyonu �a�r�l�yor...*/
f1(x);
printf("f1 cagirildiktan sonra : %d\n",x);
/* f2 fonksiyonu �a�r�l�yor...*/
f2(&x);
printf("f2 cagirildiktan sonra : %d\n",x);
return 0;
}
/* De�er ge�erek aktar�m */
void f1(int n){
n = 66;
printf("f1 fonksiyonu icinde : %d\n",n);
}
/* Adres ge�erek aktar�m */
void f2(int *n){
*n = 77;
printf("f2 fonksiyonu icinde : %d\n",*n);
}
