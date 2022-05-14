#include<stdio.h>
#include<conio.h>

main()
{
  clrscr(); //comment this line if you want to see the previous results.
int i,a=0,b=1,c=0,r;
  printf("Enter range");
  scanf("%d",&r);
  while(c<=r)
  {
    c=a+b;
    if(c<=r)
    {
      printf("%d",c,"\n");
      a=b;
      b=c;
    }
  }
  getch();
}
/*

whats Fibonacci number ? 
Addition of number with the previous number 
ex: 0 1 1 2 3 5 8....... upto n numbers

This is just a bare demonstration code for it.

There is a small error in it... I want people to rectify it and use it.

Peace.
*/
