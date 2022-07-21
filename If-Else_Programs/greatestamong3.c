//C Program to find greatest among 3
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
printf("enter third number\n");
scanf("%d",&c);

if ((a>b)&& (a>c))
{
    printf("%d is greater",a);  
}
else if (b>c)
{
 printf("%d is greater",b);   
}

else
{
    printf("%d is greater",c);
}
return 0;
}                               //SuzanCodes