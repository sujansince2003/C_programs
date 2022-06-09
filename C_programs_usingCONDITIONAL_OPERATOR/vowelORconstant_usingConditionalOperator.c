//C Program to find if the given character is vowel or constant:)
#include<stdio.h>
int main()
{
char ch;
printf("ENTER THE CHARACTER\n");
scanf("%c",&ch);
/*LOGIC
IF CHARACTER IS A,E,I,O,U or a,e,i,o,u then it is vowel otherwise not   */

 if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')|| (ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
            //ALWAYS USE '' FOR ALPHABETS CHARACTERS
  {    
    printf("%c is vowel\n",ch);
  }

else if ((ch>='a')&& (ch<='z') || (ch>='A')&& (ch<='Z') )   //this condition is for constant user may put any character like numbers,alphabet so for alphabet constant it must lies between a and z
{
    printf("%c is constant\n",ch);
   
}
else       //if user input other than alphabets
{
    printf("character  is not alphabet\n");
}


return 0;
}
                                                                               //suzanCodes:)