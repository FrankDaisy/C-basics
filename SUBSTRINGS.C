#include <stdio.h>
#include <conio.h>

char *substrings();
char *substr(origin, x, y) char *origin;
int x,y;
{
  int p=1;
  static char last[30];
  char *out=last;
  while (p<x)
  {
    origin++;
    p++;
  }
  
  while (x<=y)
  {
    *out =*origin;
    x++;
    out++;
    origin++;
  }
out--;
 return(last);
}
main()
{
  clrscr();
  int s, e ; //here i am taking it from user.. one can predifine it
  char first[30], last[30], *second, *third;
  printf("\n Enter  a String: ");
  scanf("%s", first);
  printf("\n Enter the strating and ending location of the string ");
  scanf("%d%d", &s,&e);
  second=first;
  printf("\n The entered string is : %s", second);
  third=substr(second, s, e);
  printf(" substring is : %s", third);
  getch();
}
