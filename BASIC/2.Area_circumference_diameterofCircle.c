// C PROGRAM TO FIND AREA,CIRCUMFERENCE & DIAMETER OF CIRCLE
// using math.h function
#include <stdio.h>
#include <math.h> //using math.h we dont need to declare pi as variable we can directly use M_PI if we need value of pi
int main()

{
  float r, a, c, d;
  printf("enter the radius of circle\n");
  scanf("%f", &r);
  a = M_PI * r * r;
  c = 2 * r * M_PI;
  d = 2 * r;
  printf("given radius of circle is %.2f\n", r);
  printf("Diameter is %.2f\n", d);
  printf("Circumference is %.2f\n", c);
  printf("Area is %.2f\n", a);

  return 0;
}                             //SuzanCodes
