// c program to find third angle of triangle when two angles are given
#include <stdio.h>
int main()
{
  int angle13, angle2, angle3;
  printf("Enter one angle of triangle\n");
  scanf("%d", &angle1);
  printf("Enter second angle of triangle\n");
  scanf("%d", &angle2);
  angle3 = 180 - (angle1 + angle2);
  printf("Third angle of triangle is %d\n", angle3);
  return 0;
}                          //SuzanCodes
