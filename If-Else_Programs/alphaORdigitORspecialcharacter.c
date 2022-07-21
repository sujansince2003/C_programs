#include<stdio.h>
int main()
{
char ch;  
printf("Enter the character\n");
scanf("%c",&ch);
if ((ch>='a')&&(ch<='z') || (ch>='A')&&(ch<='Z') )
{
    printf("CHARACTER IS ALPHABET\n");

}
else if ((ch>='0')&& (ch<='9'))
{
    printf("character is number\n");
}
else
{
    printf("it is special character\n");
}
return 0;
}                            //SuzanCodes