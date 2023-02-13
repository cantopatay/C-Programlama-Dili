 #include<stdio.h>
 void main()
 {
 	float x,y;
 	float sonuc;
 	char tercih;
 	printf("Toplama icin + ya basiniz\n");
    printf("Cikarma icin - ye basiniz\n");
 	printf("Carpma icin * a basiniz\n");
 	printf("Bolme icin /  e basiniz\n");
 	
 	printf("yapmak istediginiz islem operatoruna giriniz [+,-,*,/]\n");
 	scanf("%c",&tercih);
 	printf("islem yapmak istediginiz ilk sayiyi giriniz\n");
 	scanf("%f",&x);
 	printf("islem yapmak istediginiz ikinci sayiyi giriniz\n");
 	scanf("%f",&y);
 	switch(tercih)
 	{
 		case'+':
 			sonuc=x+y;
 			printf("Toplama isleminin sonucu %f",sonuc);
 			break;
 		case'-':
 			sonuc=x-y;
 			printf("Cikarma isleminin sonucu %f",sonuc);
 			break;	
 		case'*':
 			sonuc=x*y;
 			printf("Carpma isleminin sonucu %f",sonuc);
 			break;
		case'/':
 			sonuc=x/y;
 			printf("Bolme isleminin sonucu %f",sonuc);
 			break;	 
		default:
		    printf("gecerli bir islem secmediniz");	 	
	 }
	 getch();
 }
