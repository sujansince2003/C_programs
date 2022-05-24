// C program to find area and perimeter of rectangle
#include <stdio.h>
int main()
{
	int length, breadth, perimeter, area;
	printf("Enter the length of Rectangle\n");
	scanf("%d", &length);
	printf("Enter the breadth of Rectangle\n");
	scanf("%d", &breadth);
	perimeter = 2 * (length + breadth);
	area = length * breadth;
	printf("Perimeter is %d\n", perimeter);
	printf("Area is %d\n", area);
	return 0;
}                                      //SuzanCodes
