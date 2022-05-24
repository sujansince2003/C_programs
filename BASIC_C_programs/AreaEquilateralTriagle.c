//C program to find area of equilateral triangle
#include<stdio.h>
#include<math.h>  //to use sqrt function
int main()
{
  float side,area;
  printf("enter the length of side of equilateral triangle\n");
  scanf("%f",&side);
  area=(sqrt(3)/4)*(side*side);
  printf("area of triangle is %.2f units\n",area);  // %.2f is written to print output only upto 2 decimal places


    return 0;
}                           //SuzanCodes