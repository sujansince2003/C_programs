// use of not operator
#include <stdio.h>
int main()
{
    int a = 23;
    int b = 20;
    printf("%d\n", !(a % 5));  // condition(b%5),when we divide 23 by 5 there is remainder so condition is TRUE,but here is NOT_operator(!) so it changes TRUE to FALSE and 0 is printed
    printf("%d \n", !(b % 5)); // condition(b%5),when we divide 20 by 5 there is no remainder condition is FALSE,but here is NOT_operator(!) so it change FALSE to TRUE and 1 is printed
    return 0;
}                              //SuzanCodes