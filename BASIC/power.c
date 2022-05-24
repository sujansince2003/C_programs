// C Program to find power of a number
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	printf("enter the base\n");
	scanf("%f", &b);
	printf("enter the power\n");
	scanf("%f", &c);

	a = pow(b, c); // this means b^c i.e b power c:)

	printf("power of given number is %.2f\n", a);
	return 0;
}                  //SuzanCodes