//C program to print total marks,average marks and grade of a student from marks of 5 subjects 
#include<stdio.h>
int main()
{
float a,b,c,d,e,t,x,p;
printf("enter marks in physics\n");
scanf("%f",&a);
printf("enter marks in chemistry\n");
scanf("%f",&b);
printf("enter marks in math\n");
scanf("%f",&c);
printf("enter marks in english\n");
scanf("%f",&d);
printf("enter marks in python\n");
scanf("%f",&e);
t=a+b+c+d+e;
x=(t)/5;
p=(t/500)*(100);

printf("total marks is %.2f\n",t);
printf("average marks is %.2f\n",x);
printf("percentage obtained is %.2f%%\n",p);

if (p>=90)
{
printf("grade A\n");
}
else if (p>=80)
{
printf("grade B\n");
}
else if (p>=70)
{
printf("grade C\n");
}
else if (p>=60)
{
printf("grade D \n");
}
else if (p>=50)
{
printf("grade E\n");
}
else if (p>=40)
{
printf("grade F\n");
}
else if (p>=30)
{
printf("grade G\n");
}
else if (p>=20)
{
printf("grade H\n");
}

return 0;
}