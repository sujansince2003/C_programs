#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter first number\n");
scanf("%d",&num1);
printf("Enter second number\n");
scanf("%d",&num2);
printf("Enter third number\n");
scanf("%d",&num3);
(num1==num2==num3)?(printf("all are same\n")):(num1>num2 && num1>num3)? (printf("%d is greater\n",num1)):(num2>num3)?(printf("%d is greater\n",num2)):(printf("%d is greater\n",num3));
/*LOGIC
if a>b and a>c then a is greater  yedi yo vayena vane(else if ) b>c check garni true vaye b is greates among 3 number
yo pani false vaye sure(else) c nai greater hunca :)                                                         */






//paila a>b && a>c yo condition check hunxa true vaye a great vanera print hunxa.true vayena vani next exp ma jana parxa next exp ma conditiom xa tesaile tyo condition check humca i.e b>c  yo true vaye b is greater vanera print hunxa vayena vane next exp ma janxa i.e c is greater :)



    return 0;      //SuzanCodes
}