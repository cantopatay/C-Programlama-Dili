#include<stdio.h>
main()
{
	int kenar,x,y;
	printf("lutfen karenin kenar uzunlugunu giriniz:");
	scanf("%d",&kenar);
	printf("\n");	
	for(x=1; x<=kenar; x++) {//satýr
	for(y=1; y<=kenar; y++) {//sütun
	printf("*");
}   
    printf("\n");
}
getch();
}
