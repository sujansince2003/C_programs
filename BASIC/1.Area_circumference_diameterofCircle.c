// C PROGRAM TO FIND AREA,CIRCUMFERENCE & DIAMETER OF CIRCLE
#include <stdio.h>
int main()
          // METHOD NO.1 without using math.h
{
  float r, a, c, d;
  const float pi = 3.142857; // declaring pi as constant using const keyword:syntax: const data_type name_ofConstant=value;
  printf("enter the radius of circle\n");
  scanf("%f", &r);
  a = pi * r * r;
  c = 2 * pi * r;
  d = 2 * r;
  printf("given radius of circle is %.2f\n", r);
  printf("Diameter is %.2f\n", d);
  printf("Circumference is %.2f\n", c);
  printf("Area is %.2f\n", a);
  return 0;
}                         //SuzanCodes
 