//C Program to Check Whether the triangle is Equilateral or isosceles or Scalene  usinf IF-Else
#include<stdio.h>
int main()
{
int side1,side2,side3;
printf("Enter the first side of triangle\n");
scanf("%d",&side1);
printf("Enter the second side of triangle\n");
scanf("%d",&side2);
printf("Enter the third side of triangle\n");
scanf("%d",&side3);
 if ((side1+side2>=side3)&& (side2+side3>=side1) && (side1+side3>=side2))
  {   //program will enter here only if it satisfy above condition of being triangle:)
         if (side1==side2 && side2==side3)
         {
         printf(" the triangle is equilateral\n");
         }
         else if (side1==side2 || side1==side3 || side2==side3)
         {
        printf("the triangle is isosceles triangle\n");
         }
         else
         {
        printf("the triangle is scalene triangle\n");
         }
    }
else 
{
    printf("\nthe triangle is not valid\n");
}
return 0;
}                                   //SuzanCodes:)