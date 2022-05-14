#include <stdio.h>
#include <conio.h>

//a structure node
struct node
{
  int a;
  struct node *back,*next;
};

//definig another structure
struct node **last;
struct node *create(last)
{
  struct node *root, *prev, *new;
  int t,a;
  a=sizeof(struct node);
  printf("\n Enter a number to stop....");
  scanf("%d",t);
  root=prev=*last=NULL; 

  while(t!=-99)
  {
    new =(struct node *)malloc(s); //returns a pointer
    new->a=t;
    new->next=NULL;
    if(root==NULL)
    {
      root=new;
      new->back=NULL;
    }
    else
    {
      prev->next=new;
      new->back=prev;
    }
    prev=new;
    printf("Enter  a number to stop:");
    scanf("%d",&t);
  }
  if(root!=NULL)
  {
    *last=new;
    return(root);
  }
  
  void show(start, end) struct node *start, *end;
  {
    printf("STARTS FROM HERE >>>>");
    while(start!==NULL)
    {
      printf("%d >>>>", start->a);
      start= start->next;
    }
    printf("Ends HERE\n\n");
  }
  
  void search(start) struct node *start;
  {
    int value,count=0;
    printf("Enter the number you wish to search:");
    scanf("%d", &value);
    while(start!=NULL)
    {
      count++;
      if (value==start->a)
      {
        printf("\nSucess.. Found %d at the location %d", value,count);
      }
      else
      {
        printf("\n Failed to find %d .... please check and enter again.");
      }
      start=start->new;
     }
  }
  
  void main()
  {
    clrscr();
    struct node *q, *last;
    q=create(&last);
    display(q, last);
    search(q);
    getch();
  }

  /*
  Data in Double linked list  

One can enter number and search for a number out of the list.

You can also get the location where it is stored as it is in double linked list  
  */
