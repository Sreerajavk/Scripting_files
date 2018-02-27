#include<stdio.h>
#include<stdlib.h>
void insert(int , int );
void delete(int);
void display();

struct node{
  int data;
  struct node *next;
  };
struct node *top = NULL;
void main()
{
  int ch, n ,pos;
  do{
    printf("\nEnter 1 for insert\n2 for delete\n3 for display\n4 to exit\n");
    scanf("%d" , &ch);
    switch(ch)
    {
      case 1:
               printf("Enter the number\n");
               scanf("%d", &n);
               printf("Enter the position\n");
               scanf("%d", &pos);
               insert(n,pos);
               break;
      case 2: printf("Enter the position \n");
              scanf("%d" , &pos);
              delete(pos);
              break;
      case 3: display();
              break;
      }
   }while(ch!=4);
}

void insert(int val , int pos)
{

   struct node *temp , *current , *previous;
   int i;  
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   if ((top == NULL) || (pos == 1))
   {
     top = temp;
     temp->next = NULL;
   }
  else 
  {
    i=0;
    current = top;
    while(i<=pos-2 && current != NULL)
    {
      previous = current;
      current = current->next;
     i++;
   }
 
  temp->next = current;
  previous->next= temp;
  }
}

void delete(int pos)
{
   struct node *current , *previous;
   int i;
   if(top == NULL)
      printf("Linked list is empty\n");
   else
   {  
      if(pos == 1)
      {
         top = top->next;
      }
     else{
      i=0;
      current = top;
      while(i<=pos-2 && current != NULL)
      {
        previous = current;
    	current = current->next;
     	i++;
      }
   previous->next = current->next;
  }
  }
}

void display()
{
  struct node *ptr;
  if(top == NULL)
    printf("Linked list is empty\n");
  else
  {
     ptr = top;
     printf("The Elements are:");
    while(ptr != NULL)
    {
      printf("%d " , ptr->data);
      ptr= ptr->next;
    }
  }

}
 
   


