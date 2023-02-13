#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *dizi,elemansayisi,x;
	printf("eleman sayisini gir:");
	scanf("%d",&elemansayisi);
	printf("\n");
	dizi=(int*)malloc(elemansayisi*sizeof(int));
	for(x=0;x<elemansayisi;x++)
	printf("dizi[%d] degeri:%d\t adresi:%p\n",x,dizi[x],(dizi+x));
	free(dizi);
// biz dizilere deðer atamadýk kendiliðinden rastgeledeger atamýs
	
}
