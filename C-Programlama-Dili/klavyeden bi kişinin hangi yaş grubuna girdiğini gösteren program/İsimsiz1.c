#include<stdio.h>
void main()
{
int yas;
printf("lutfen yasinizi giriniz\n");
scanf("%d",&yas);
if(yas<18)
{
printf("cocuksun\n"); }
else if(yas>=18 && yas<30)

{printf("gencsin\n");}
 
 else printf("yaslisin");
 getch();
}
