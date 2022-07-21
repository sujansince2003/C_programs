// C Program to find the profit or Loss while selling
#include <stdio.h>
int main()
{
  int cp, sp;
  printf("enter the cost price\n");
  scanf("%d", &cp);
  printf("enter the selling price\n");
  scanf("%d", &sp);
  if (cp == sp)
  {
    printf("it is neither profit nor loss\n");
  }
  else if (cp > sp)
  {
    printf("it is loss\n");
  }

  else
  {
    printf("it is profit\n");
  }
  return 0;
}                      //SuzanCodes