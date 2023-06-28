#include<stdio.h>
#include<conio.h>

void main(){
int i;
int n;
clrscr();
printf("Enter any number: ");
scanf("%d",&i);
do{
   printf("%d \n",i);
   i-=2;
}while(i>=1);
getch();
}