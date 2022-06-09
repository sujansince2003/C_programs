//C program to check whether given year is Leap year or not
#include<stdio.h>
int main()
{
 int year;
 printf("enter any year\n");
 scanf("%d",&year);
 /*logic
 if year is exactly divisible by 4 and year is not exactly divisible by 100 or year is exactly divisible by 400 then the year is Leap year otherwise it is Normal year*/
 (year%4==0 && year%100!=0)?(printf("year is leap\n")):(year%400==0)?(printf("year is leap\n")):(printf("year is normal\n"));
return 0;
}                       //SuzanCodes:)