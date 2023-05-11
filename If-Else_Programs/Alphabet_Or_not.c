// C Program to Check Whether the Given Character is Alphabet OR  Not
#include <stdio.h>
int main()
{
  char ch;
  printf("enter the CHARACTER\n");
  scanf("%c", &ch);               // taking input from user
  if ((ch >= 'a') && (ch <= 'z')) // to be alphabet it must lies between a and z
  // USING "" INSTEAD OF '' GIVES ERROR SO ALWAYS USE 'A','a'.......etc
  {
    printf("this is alphabet\n");
  }
  else if ((ch >= 'A') && (ch <= 'Z')) // user also may input in capital letter so it also may lies between A and Z
  {
    printf("This is Alphabet\n");
  }
  else
  {
    printf("This is not an Alphabet\n");
  }
  return 0;
} // SuzanCodes
