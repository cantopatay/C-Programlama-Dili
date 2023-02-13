#include<stdio.h>
int fakt(int x)
{
	int sonuc;
	if(x<=1)
	return(1);
	sonuc=x*fakt(x-1);
	return(sonuc);	
}
main()
{
	int faktor,sayi;
	printf("Faktoriyeli hesaplanacak sayiyi giriniz\n");
	scanf("%2d",&sayi);
	faktor=fakt(sayi);
	printf("Faktoriyel=%2d",faktor);
}
