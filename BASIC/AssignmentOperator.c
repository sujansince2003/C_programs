//c program to perform assighnment operations using assighment operators
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the value of a\n");
    scanf("%f",&a);
    printf("enter the value of b\n");
    scanf("%f",&b);       
    printf("enter the value of c\n");
    scanf("%f",&c);
    printf("enter the value of d\n");
    scanf("%f",&d);
    //arthimetic operators assigns value from right side operands to left side operands:)
        a+=3; // new value of a=(value of a given by user)+3 
        b-=4; // new value of b=(value of b given by user)-4           
        c*=5; // new value of c=(value of c given by user)*5               
        d/=6; // new value of d=(value of d given by user)/6         
    printf("New value of a is %.0f\n",a); 
    printf("New value of b is %.0f\n",b);         
    printf("New value of c is %.0f\n",c);
    printf("New value of d is %.2f\n",d);

    return 0;
}                                          //SuzanCodes
