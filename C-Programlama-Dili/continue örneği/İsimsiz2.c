#include <stdio.h>
main()
{
	int toplam=0,i,sayi;
	for(i=1; i<=5;i++)
	{
		printf("%d.sayiyi giriniz\n",i);
		scanf("%d",&sayi);
		if(sayi<=0)
		{i--; 
		continue;}
			toplam+=sayi;
    }
		printf("Toplam:%d", toplam);
	
}
