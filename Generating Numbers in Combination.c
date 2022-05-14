#include<stdio.h>
#include<conio.h>
main()
{
  clrscr(); //Comment this line to see the previous results
  int a[10],b[10],c,d=0,range,e,f,g,h=0,i;
  long n=0;
  
  printf("Enter number of combination of numbers:");
  scanf("%d",&c);
  
  printf("Enter combination of numbers :");
  for(i=0;i<d;i++)
    {
      scanf("%d"&a[i]);
      printf("Enter Range :");
      for(i=1;i<=range;i++)
      {
        while(n>0)
        {
          e=0;
          g=n%10;
          h++;
          while(e<c)
          {
            if(g==a[e])
            {
              d++;
              e++;
            }
            n=n/10;
          }
          if(d==h)
          {
            printf("%d\t",i);
          }
        }
        getch();
      }
}
  /*
  
  This program takes in only numbers as an input

First it takes in the numbers for combination
secondly it takes in the combination of numbers
Third it takes in input of the range

sample o/p:
Enter number of combination of numbers: 2
Enter combination of numbers : 1
2
Enter Range : 100
 1 2 11 22 12 21
  */
