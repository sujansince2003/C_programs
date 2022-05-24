// C program to calculate total marks,average marks and percentage obtained by student:)
#include <stdio.h>
int main()
{
    float phy, chem, math, history, python, total, av, percent;
    printf("enter marks in physics\n");
    scanf("%f", &phy);
    printf("enter marks in chemistry\n");
    scanf("%f", &chem);
    printf("enter marks in math\n");
    scanf("%f", &math);
    printf("enter marks in history\n");
    scanf("%f", &history);
    printf("enter marks in python\n");
    scanf("%f", &python);
    total = phy + chem + math + history + python;
    av = (total) / 5;
    percent = (total / 500) * (100);

    printf("total marks is %.2f\n", total);
    printf("average marks is %.2f\n", av);
    printf("percentage obtained is %.2f%%\n", percent);
    return 0;
}