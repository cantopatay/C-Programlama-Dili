/* Bir karakter dizisinin uzunluðunu bulur */
#include <stdio.h>
void main() 
{
char s[40];
int k = 0;
/* diziyi oku */
printf("Bir seyler yazin : ");
gets(s);
//Scanf ile yapamayýz cünkü scanf ile yazýnca bosluða kadar sayar gerisini saymaz
//ama gets(s) girdigin her  seyi baz alýr

/* sonlandýrýcý karaktere kadar karakterleri say */
//bu arada dizi karakterlerin sonlandýrýcýsý "\0" dýr
while( s[k]!='\0' ) k++;
printf("Dizinin uzunlugu : %d\n",k);
getch();
}
