#include <stdio.h>
struct student // Declaring a Structure
{
    char name[50];
    int roll[100];
    float marks[];
} s[10]; // s[10] means we can take and store data of 10 students
int main()
{
    int i, j; // For Looping
    printf("Enter information of students:\n");

    for (i = 1; i <= 10; i++) // since s[0] cannot be used for structure so loop starts from 1
                             // using loop to take input from User
    {
        printf("Enter Roll Number\n");
        scanf("%d", &s[i].roll[i]);

        printf("Enter Name Of Student\n ");
        scanf("%s", s[i].name);
        printf("Enter Marks In 5 Subjects\n");
        for (int j = 1; j <= 5; j++)
        {

            scanf("%f", &s[i].marks[j]);
        }

        printf("\n");
    }
    printf("Displaying Information:\n");

    for (i = 1; i <= 10; i++)
    {

        printf("\nRoll number: %d\n", s[i].roll[i]);
        printf("Name:  ");
        puts(s[i].name);
        printf("Marks In 5 Subjects:\n");
        for (int j = 1; j <= 5; j++)
        {
            printf(" Marks is %.1f\n", s[i].marks[j]);
        }

        printf("\n");
    }

    return 0;
}                        //SuzanCodes:)