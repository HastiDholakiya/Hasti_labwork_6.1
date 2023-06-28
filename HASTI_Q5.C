#include<stdio.h>
#include<conio.h>

void main(){
int StartYear,EndYear;
clrscr();
printf("Enter the starting year: ");
scanf("%d",&StartYear);

printf("Enter the ending year: ");
scanf("%d",&EndYear);

printf("leap years between %d and %d: \n",StartYear,EndYear);

  if(StartYear%4!=0){
   StartYear+=4-(StartYear%4);
  }
while(StartYear<=EndYear){
  if(StartYear%400==0||(StartYear%4==0&&StartYear%100!=0)){
     printf("%d \n",StartYear);
  }
  StartYear+=4;
}
getch();
}