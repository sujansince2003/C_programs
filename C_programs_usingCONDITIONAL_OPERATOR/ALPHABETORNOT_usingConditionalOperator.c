//C program to check whether the given character is alphabet or not
#include<stdio.h>
int main()
{
char ch;  
printf("enter the character\n");
scanf("%c",&ch);     //taking input from user

//character between a to z or A to Z are alphabets :)      
(ch>='a' && ch<='z')||(ch>='A' && ch<='B')? (printf("IT IS AN ALPHABET\n")):(printf("IT IS NOT AN ALPHABET\n"));
return 0;
}                  //SuzanCodes