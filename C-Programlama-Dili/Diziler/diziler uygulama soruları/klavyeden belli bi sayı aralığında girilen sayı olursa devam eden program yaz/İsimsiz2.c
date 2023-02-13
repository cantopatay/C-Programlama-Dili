#include<stdio.h>
main()
{
	int x;
	while(1) //while(1) demek sonsuz döngü demekmiþ.
	{
	printf("Bir sayi giriniz=");
	scanf("%2d",&x);
	if(x>=25 && x<=50)
	{printf("dogru sayi girdin devam\n");}
	else 
	{printf("Hoscakal\n");}
	}
	getch();
}

