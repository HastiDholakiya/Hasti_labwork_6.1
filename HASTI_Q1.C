#include<stdio.h>
#include<conio.h>

void main(){
int i=1;
int n;
clrscr();
printf("Enter number: ");
scanf("%d",&n);
while(i<=n){
    printf("%d \n",i);
    i++;
}
getch();
}