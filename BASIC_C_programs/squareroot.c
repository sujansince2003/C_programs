//c PROGRAM TO FIND SQUARE ROOT OF GIVEN NUMBER:)
#include<stdio.h>
#include<math.h> 
int main()
{
float a,b;
printf("enter the number\n");
scanf("%f",&a);
b=sqrt(a);  //we can use sqrt function to calculate square root as we declare math.h above
printf("the square root of %.2f is %.2f\n",a,b );

}