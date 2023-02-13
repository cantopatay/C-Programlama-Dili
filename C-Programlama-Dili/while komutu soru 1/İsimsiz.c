#include<stdio.h>
 int main(void)
 {
 	int sayi=1;
 	int enbuyuk=0;
 	while(sayi>0)
	 { 
	 printf("sayi giriniz\n");
	 scanf("%d",&sayi);
	
	 if(enbuyuk<sayi)
	 {
	 
		enbuyuk=sayi;
	}
}
printf("Girilen sayilardan en buyugu %d dir \n",enbuyuk);
return(0);
 	
 getch();	
 }
 
