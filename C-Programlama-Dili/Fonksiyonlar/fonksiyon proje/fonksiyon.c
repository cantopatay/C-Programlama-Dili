#include <stdio.h>

int fonksiyon(int a,int b,int c,int x)
{
int sonuc;
sonuc=a*x*x*x*b*x*x+c*x+1;
return sonuc;
}
void main()
{
	int a,b,c,x,y;
	printf("Ekrandan a,b,c,d,ve x degerlerini giriniz.");
	    printf("\na=");scanf("%d",&a);
		printf("\nb=");scanf("%d",&b);
		printf("\nc=");scanf("%d",&c);
		printf("\nx=");scanf("%d",&x);
		y=fonksiyon(a,b,c,x);
		printf("\nSonuc=%d",y);
		getch();
		 
		 }
