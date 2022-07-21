//C Program to distinguish greater and smaller number or checks whether the both number is equal
#include<stdio.h>
int main()
{
int a,b;
printf("enter the number\n ");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
if (a==b)
{
    printf("%d is equal to %d\n",a,b);
if (a>b);
{
    printf("%d is greater than %d",a,b);
}

}
else
{
    printf("%d is smaller than %d\n",a,b);
}
return 0;
}                                  //SuzanCodes