#include<stdio.h>
#include<conio.h>

void main(){
int i;
int n;
clrscr();
printf("Enter any number: ");
scanf("%d",&i);
while(i>=1){
    printf("%d \n",i);
    i--;
}
getch();
}