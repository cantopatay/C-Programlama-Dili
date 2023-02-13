#include <stdio.h>
main()
{
	int x,toplam=0;
	for(x=1;x<10;x+=2)
	{
		if(x%3==0 && x%5!=0)//burdaki unlem isareti deðilse anlamýnda
		toplam+=x;
	}
	printf("%d", toplam);
		getch();
	}

