#include<stdio.h>
int main()
{
float angle1,angle2,angle3;
printf("enter angles of triangles\n");
scanf("%f%f%f",&angle1,&angle2,&angle3);
if ((angle1+angle2+angle3==180) && angle1>0 && angle2>0 && angle3>0)
   {
    printf("***the triangle is  valid***\n");
   }
else
{
    printf("***the triangle is not valid***\n");
}
return 0;
}             //SuzanCodes