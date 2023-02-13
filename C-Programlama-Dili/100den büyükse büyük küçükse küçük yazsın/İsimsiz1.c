 #include<stdio.h>
void main()
{
 	int girilen_sayi;
 	printf("lutfen bir tam sayi giriniz>");
 	scanf("%d",&girilen_sayi);
 	if(girilen_sayi>100)
 	printf("girdiginiz sayi 100'den buyuktur.\n");
	 else
 	printf("Girilen sayi 100'den kucuk veya esittir\n");
    getch();
 }
