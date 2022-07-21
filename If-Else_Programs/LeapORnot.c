//c progrsm to fid if the year is leap or not:)
#include<stdio.h>
int main()
{
 int year;
 printf("enter the year\n");
 scanf("\%d",&year);
  if ((year%4==0) && (year%100!=0))
    {
         printf("the year is leap\n");
    }
    else if (year%400==0)
       {
         printf("the year is leap\n");
       }
 else
 {
     printf("the year is normal \n");
 }
 return 0;
}                                                 //suzanCodes:)