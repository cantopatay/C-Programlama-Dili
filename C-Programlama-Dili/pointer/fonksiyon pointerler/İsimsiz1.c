#include<stdio.h>
void kare(int a)
{
	printf("girdigin sayinin karesi: %d \n",a*a);
	
}
main()
{   
	int sayi;
	void (*ptr)(int)=kare;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);
    kare(sayi);
    // yada su sekilde yaz�labilir �stteki yaz�yla alttaki yaz� ayn� �eyi ifade ediyor
    ptr(sayi);
  
}
