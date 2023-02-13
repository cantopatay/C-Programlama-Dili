#include<stdio.h>
#include<string.h>
int uzunlukhesapla(char *p) 
{
	int i;
	int uzunluk=0;
	for(i=0;p[i]!='\0';i++)
	{
		uzunluk++;
	}
	return uzunluk;
}
main()
{
	char yazi[]="ben can topatay";
	printf("%d",uzunlukhesapla(yazi));
}
