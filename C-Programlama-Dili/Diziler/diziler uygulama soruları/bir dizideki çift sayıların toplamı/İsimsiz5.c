#include<stdio.h>
main()
{
	int a[5];
	int x,toplam;
	for(x=1;x<6;x++)
	{
	printf("Lutfen a[%d].degeri giriniz= ",x);
	scanf("%d",&a[x]);
    }
    toplam=0;
	for(x=1;x<6;x++)
	{
		if(a[x]%2==0)
		{
			toplam=toplam+a[x];
		}
	}
	printf("A dizisinin cift sayilarinin toplami=%d",toplam);
	getch();
}
