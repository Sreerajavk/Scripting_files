#include<stdio.h>
#include<malloc.h>
struct node
{
 struct node*left;
 int data;
 struct node*right;
};
struct node*tree=NULL;
struct node*insert(struct node*,int);
void pretraversal(struct node*);
void posttraversal(struct node*);
void intraversal(struct node*);
struct node*search(struct node*,int);
struct node*delete(struct node*,int);
struct node*min(struct node*);
void main()
{
 int option,val;
 printf("Menu\n1.Insert\n2.Preorder traversal\n3.Postorder traversal\n4.Inorder traversal\n5.Delete\n6.Search");
 do
 {
  printf("\nEnter your option:");
  scanf("%d",&option);
  switch(option)
  {
   case 1:
     printf("\nEnter value to insert/-1 to stop insering:");
     scanf("%d",&val);
     while(val!=-1)
     {
      tree=insert(tree,val);
      printf("\nenter value to insert:");
      scanf("%d",&val);
     }
     break;
   case 2:
     printf("\nThe preorder traversal of the tree is:");
     pretraversal(tree);
     break;
   case 3:
     printf("\nThe postorder traversal of the tree is:");
     posttraversal(tree);
     break;
   case 4:
     printf("\nThe inorder traversal of the tree is:");
     intraversal(tree);
     break;
   case 5:
     printf("\nEnter the element to be deleted:");
     scanf("%d",&val);
     tree=delete(tree,val);
     break;
   case 6:
     printf("\nEnter the element to be searched for:");
     scanf("%d",&val);
     search(tree,val);
     break;
   default:
     printf("\nTerminating program");
  }
 }while(option<=5);
}
struct node*insert(struct node*tree,int val)
{
 struct node*ptr,*nodeptr,*parentptr;
 ptr=(struct node*)malloc(sizeof(struct node*));
 ptr->data=val;
 ptr->left=NULL;
 ptr->right=NULL;
 if(tree==NULL)
 {
  tree=ptr;
 }
 else
 {
  parentptr=NULL;
  nodeptr=tree;
  while(nodeptr!=NULL)
  {
   parentptr=nodeptr;
   if(val<nodeptr->data)
     nodeptr=nodeptr->left;
   else
     nodeptr=nodeptr->right;
  }
  if(val<parentptr->data)
    parentptr->left=ptr;
  else
    parentptr->right=ptr;
 }
 return(tree);
}
void pretraversal(struct node*tree)
{
 if(tree!=NULL)
 {
  printf("\t%d",tree->data);
  pretraversal(tree->left);
  pretraversal(tree->right);
 }
}
void posttraversal(struct node*tree)
{
 if(tree!=NULL)
 {
  posttraversal(tree->left);
  posttraversal(tree->right);
  printf("\t%d",tree->data);
 }
}
void intraversal(struct node*tree)
{
 if(tree!=NULL)
 {
  intraversal(tree->left);
  printf("\t%d",tree->data);
  intraversal(tree->right);
 }
}
struct node*delete(struct node*tree,int val)
{
 if(tree==NULL)
   return tree;
 if(val<tree->data)
   tree->left=delete(tree->left,val);
 else if(val>tree->data)
   tree->right=delete(tree->right,val);
 else
 {
   if(tree->left==NULL)
   {
     struct node*temp=tree->right;
     free(tree);
     return(temp);
   }
   else if(tree->right==NULL)
   {
     struct node*temp=tree->left;
     free(tree);
     return(temp);
   }
   struct node*temp=min(tree->right);
   tree->data=temp->data;
   tree->right=delete(tree->right,temp->data);
 }
 return(tree);
}
struct node*min(struct node*tree)
{
 if((tree==NULL)||(tree->left==NULL))
   return(tree);
 else
   return(min(tree->left));
}
struct node*search(struct node*tree,int val)
{
 if(tree!=NULL)
 {
 if(val==tree->data)
  printf("Data found");
 else if(val<tree->data)
  tree->left=search(tree->left,val);
 else if(val>tree->data)
  tree->right=search(tree->right,val);
 else
    printf("Data absent!");
 }
}

