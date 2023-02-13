#include<stdio.h>
main()
{
	int *ptam, tam=16;
	ptam=&tam;

	printf("tam'in degeri =%d\n",tam);
	printf("tam'in  adresi=%p\n",&tam);
	printf("tam'in adresi =%p\n",ptam);
	
}
