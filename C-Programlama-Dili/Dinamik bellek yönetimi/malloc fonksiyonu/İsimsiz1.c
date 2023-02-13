#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x,*ptr, toplam=0,n;
	printf("Eleman sayisini giriniz:");
	scanf("%d",&n);
	printf("\n");
	ptr=(int*)(malloc(n*sizeof(int)));
	if(ptr==NULL)
   {printf("yeterli Hafýza Yok\n");}
   printf("Degerleri Giriniz\n");
   for(x=0;x<n;x++)
   {
   printf("%d.Degeri Girin:",x+1);
   scanf("%d",ptr+x);
   printf("\n");
   toplam=toplam+*(ptr+x);
   }
   printf("toplam:%d",toplam);
}

