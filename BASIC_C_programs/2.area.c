#include<stdio.h>
int main()
{
    int day,week,year;
printf("enter the number of days\n");
scanf("%d",&day);
year= day/365;
week= (day-(year*365))/7;
day=day-(year*365+week*7);

    printf("number of years is %d\n", year);
    printf("number of weeks is %d\n", week);
    printf("number of days is %d\n", day);




    return 0;
}
