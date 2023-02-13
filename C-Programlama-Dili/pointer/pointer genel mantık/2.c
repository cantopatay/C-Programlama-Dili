#include<stdio.h>
main()
{
	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	int sayilar[5]={1,2,3,4,5};
	int *arrayp;
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrayp=&sayilar[1];
	printf("%p adresindeki int'in degeri %d'dir\n",ap,*ap);
	printf("%p adresindeki float'in degeri %f'dir\n",bp,*bp);
	printf("%p adresindeki double'nin degeri %lf'dir\n",cp,*cp);
	printf("%p adresindeki char'in degeri %c'dir\n",dp,*dp);
	printf("%p adresindeki int'in degeri %d'dir\n",arrayp,*arrayp);
	
}
