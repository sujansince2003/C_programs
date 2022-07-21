//c program to find whether the alphabet is uppercase or lowercase:)
#include<stdio.h>
int main()
{
    char ch;
printf("ENTER THE CHARACTER\n");
scanf("%c",&ch);
     if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))   //this helps to check smallcase and uppercase only if the input is alphabet
     {
          if (ch>='a' && ch<='z')  //for lowercase
          {
             printf("it is lower case\n");
          }
             if (ch>='A' && ch<='Z') //for uppercase
                 {
                   printf("it is UPPER case\n"); 
                 }
       
     }
else
{
    printf("it is not an alphabet\n");
}

   return 0;
}