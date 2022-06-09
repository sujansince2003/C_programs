//C program to find Greater number among two numbers
#include<stdio.h>
int main()
{
   float NUM1,NUM2;
   printf("Enter First Number\n");
   scanf("%f",&NUM1);
   printf("Enter Second Number\n");
   scanf("%f",&NUM2);
   (NUM1>NUM2)?(printf("%.2f is greater than %.2f\n",NUM1,NUM2)):(printf("%.2f is smaller than %.2f\n",NUM1,NUM2));
return 0;
}                                    //SuzanCodes:)