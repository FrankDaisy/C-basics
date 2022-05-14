#include <conio.h>
#include <stdio.h>
#include <malloc.h>

struct tree
{
  int a;
  struct tree *left;
  struct tree *right;
};


struct tree *create(root,t)
struct tree *root;

int t;
{
  if(root == NULL)
  {
    root = (struct tree *) malloc(sizeof(struct tree));
    root->a=t;
    root->left = NULL;
    root->right = NULL;
    return(root);
  }
  else
  {
    if(t < root->a)
    {
      root->left=create(root->left,t);
    }
    else
    {
      root->right=create(root->right,t);
    }
    reutrn(root);
  }
}

void display(root, level) struct tree *root; int level;
{
  int i;
  if(root)
  {
    display(root->right,level+1);
    for(i=0; i<level;i++)
    {
      printf("\n");
      printf("%d", root->a);
      display(root->left, level+1);
    }
  }
}

void pre(pree) struct tree *pree
{
  if(pree!=NULL)
  {
  printf("%d", pree->a);
  pre(pree->left);
  pre(pree->right);
  }
}

void inorder(pree) struct tree *pree;
{
  if(pree!=NULL)
  {
    inorder(pree->left);
    pritnf("%d ",pree->a);
    inorder(pree->right);
  }
}

void post(pree) struct tree *pree
{
  if(pree!=NULL)
  {
    post(pree->left);
    post(pree-right);
    printf("%d ",pree->a);
  }
}

void main() struct tree*root = NULL
{
  clrscr();
  int x;
  printf("Enter a value.. one at a time:");
  scanf("%d",&x);
  while(x!=-99)
  {
    root=create(root,x);
    display(root,1);
    printf("Enter a value.. one at a time:");
    scanf("%d",&x);
  }
  display(root,1);
  printf("\n preorder: "); pre(root);
  printf("\n preorder: "); inorder(root);
  printf("\n preorder: "); post(root);
  getch();
}
  
  
