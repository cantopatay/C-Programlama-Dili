#include<stdio.h>
void main()
{
	long int i,n,faktor;
	while(1)/*sonsuz d�ng�*/
	{
		printf("Faktoriyeli hesaplanacak say� girin :");
		scanf("%ld",&n);
		if(n<0) break; //d�ng�y� sonland�r
		for(faktor=1, i=1;i<=n; i++)
		faktor=faktor*i;
		printf("%ld!=%ld\n",n,faktor);
		getch();
					}}
