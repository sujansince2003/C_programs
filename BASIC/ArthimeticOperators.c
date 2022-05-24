// C PROGRAM TO PERFORM ARITHEMETIC OPERATIONS
#include <stdio.h>
int main()
{
     int num1, num2;
     printf("enter value of first number\n ");
     scanf("%d", &num1);
     printf("enter value of second number\n");
     scanf("%d", &num2);
     printf("sum is %d\n", num1 + num2);
     printf("difference is %d\n", num1 - num2);
     printf("division is %.1f\n", (float)num1 / num2); /* (float) [use of TypeCasting] is used to avoid integer division and %.1f is used to print answer upto first decimal*/
     printf("product is %d\n", num1 * num2);
     printf("remainder or modulo division is %d\n", num1 % num2);

     return 0;
}                                                      //SuzanCodes