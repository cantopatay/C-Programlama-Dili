/* Bir karakter dizisinin uzunlu�unu bulur */
#include <stdio.h>
void main() 
{
char s[40];
int k = 0;
/* diziyi oku */
printf("Bir seyler yazin : ");
gets(s);
//Scanf ile yapamay�z c�nk� scanf ile yaz�nca boslu�a kadar sayar gerisini saymaz
//ama gets(s) girdigin her  seyi baz al�r

/* sonland�r�c� karaktere kadar karakterleri say */
//bu arada dizi karakterlerin sonland�r�c�s� "\0" d�r
while( s[k]!='\0' ) k++;
printf("Dizinin uzunlugu : %d\n",k);
getch();
}
