#include<stdio.h>
main(){

int a[5];
int i, toplam=0;
float ortalama;
for(i=0;i<5;i++)
{
	printf("Lutfen a[%d].sayiyi giriniz:",i);
	scanf("%d",&a[i]);
	toplam+= a[i];
}
	ortalama=toplam/5.0;
	printf("sayinin ortalamasi %f dir",ortalama);
	getch();
}

