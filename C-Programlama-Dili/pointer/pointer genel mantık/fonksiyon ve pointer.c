 #include<stdio.h>
 void degerdegistir(int*a,int*b)
 {
 	int gecici;
 	gecici=*a;
 	*a=*b;
 	*b=gecici;
 }
 main()
 {
 	int x=5,y=10;
 	degerdegistir(&x,&y);
 	printf(" x=%2d\n y=%2d",x,y);
 }
