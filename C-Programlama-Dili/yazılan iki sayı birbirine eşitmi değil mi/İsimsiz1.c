#include<stdio.h>
void main()
{

	int x, y;
	
	printf("ilk sayiyi giriniz\n");
    scanf("%d",&x);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d",&y);
    if(x==y)
	{
	
	printf("ilk sayi ikinci sayiya esittir");
}
	else if(x>y)
	{
	
	printf("ilk sayı ikinci sayidan buyuk");}
  else
  {
  printf("ikinci sayi ilk sayidan buyuk");}


	getch();
}

