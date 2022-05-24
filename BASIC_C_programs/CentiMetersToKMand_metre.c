// C Program to convert centimeter to meter and kilometer
#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("enter length in centi meter\n");
    scanf("%f", &cm); 
    km= cm/10000; 
    m= cm/100;

    printf(" length in  meter is %.2f m    \n",m);
    printf(" length in  kilometer is %.4f km    \n",km);
    return 0;
}                  //SuzanCodes