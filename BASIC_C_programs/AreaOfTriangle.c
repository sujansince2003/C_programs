// C program to find area of triangle
#include <stdio.h>
int main()
{
    float base, height, area;
    printf("enter the base of triangle\n");
    scanf("%f", &base);
    printf("enter the height of triangle\n");
    scanf("%f", &height);
    area = ((base * height) /2) ;
    printf("area of triangle is  %.1f units\n", area);
    return 0;
}                             //SuzanCodes