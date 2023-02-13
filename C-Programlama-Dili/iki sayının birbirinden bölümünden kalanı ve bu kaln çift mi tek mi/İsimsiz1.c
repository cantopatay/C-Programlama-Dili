#include <stdio.h>
int main()
{
int a, b, sonuc;
printf("Sayiyi giriniz=");
scanf("%d",&a);
printf("Sayiyi giriniz=");
scanf("%d",&b);
sonuc=a%b;
if(sonuc%2==0)
printf("Girilen sayi cifttir.");
else
printf("Girilen sayi tektir.");
getch();
return 0;
}
