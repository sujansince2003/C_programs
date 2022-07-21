//C Program to Check Whether a given number is divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
int a;
printf("ENTER THE NUMBER\n");
scanf("%d",&a);
if ((a%5==0) && (a%11==0))
{
    printf("the number is divisible by 5 and 11\n");
}
else
{
    printf("THE NUMBER IS NOT DIVISIBLE BY 5 AND 11\n");
}
return 0;
}                   //SuzanCodes