/*
C Program to find outvnumber of  
thousand notes,five hundred notes,fifty notes,twenty rupee notes,
ten rupee note,five rupee note,two rupee coin and one rupee coin in Given amount of Money
*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l;

    printf("*****  ENTER THE AMOUNT  *****\n");
    scanf("%d", &a);

    if (a >= 1000)
    {
        b = a / 1000;
        a -= b * 1000;
        printf("number of  thousand notess:%d\n", b);
    }
    if (a >= 500)
    {
        c = a / 500;
        a = a - c * 500;
        printf("number of  five hundred notes:%d\n", c);
    }
    if (a >= 100)
    {
        d = a / 100;
        a = a - d * 100;
        printf("number of  hundred notes:%d\n", d);
    }
    if (a >= 50)
    {
        e = a / 50;
        a = a - e * 50;
        printf("number of  fifty rupee notes:%d\n", e);
    }
    if (a >= 20)
    {
        f = a / 20;
        a = a - f * 20;
        printf("number of  twenty rupee notes:%d\n", f);
    }
    if (a >= 10)
    {
        g = a / 10;
        a = a - g * 10;
        printf("number of  ten rupee notes:%d\n", g);
    }
    if (a >= 5)
    {
        h = a / 5;
        a = a - h * 5;
        printf("number of  five rupees notes:%d\n", h);
    }
    if (a >= 2)
    {
        i = a / 2;
        a = a - i * 2;
        printf("number of  two rupee coins:%d\n", i);
    }
    if (a >= 100)
    {
        j = a / 1;
        a = a - j * 1;
        printf("number of  one rupee coins:%d\n", j);
    }

    return 0;
}                             //SuzanCodes