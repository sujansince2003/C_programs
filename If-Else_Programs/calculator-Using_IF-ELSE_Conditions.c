//Calculator using If-Else conditions
#include <stdio.h>
int main()
{
    double num1, num2;
    char op;
    printf("enter the first number\n");
    scanf("%lf", &num1);
    printf("enter second number\n");
    scanf("%lf", &num2);
    printf("enter the operator\n");
    scanf(" %c", &op);  //always use space before %c while taking a character as input:)
    if (op == '+')
    {
        printf("the sum is %lf\n", num1 + num2);
    }
    else if (op == '-')

    {
        printf("the sum is %lf\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("the sum is %lf\n", num1 * num2);
    }
    else if (op == '/')
    {
        printf("the sum is %lf\n", num1 / num2);
    }
    else
    {
        printf("invalid operator\n");
    }

    return 0;
}