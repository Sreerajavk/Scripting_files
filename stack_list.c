#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int data;
  struct stack *next;
};
  
struct stack *top =NULL;
void push();
void pop();
void display();
void main()
{
  int op;
  printf("Enter 1 for push\n2 for pop\n3 for display\n4 to exit\n");
  do{
    printf("Enter your option\n");
    scanf("%d", &op);
    switch(op)
    {
      case 1: push();break;
      case 2: pop();break;
      case 3: display();break;
      
    }
   }while(op!=4);
}

void push()
{
  struct stack *ptr ,*newnode;
  newnode = (struct stack *)malloc(sizeof(struct stack));
  int val;
  printf("Enter the value to push\n");
  scanf("%d", &val);
  
  newnode->data = val;
  if(top == NULL)
    newnode->next = NULL;
  else
    newnode->next =top;
  top = newnode;
}

void pop()
{
 struct stack *ptr;
 if(top == NULL)
   printf("Underflow\n");
 else 
   {
    ptr= top;
    top= top->next;
    printf("\nDropped element is %d\n" , ptr->data);
    free(ptr);
  }
}

void display()
{
  struct stack *ptr; 
  if(top == NULL)
   printf("Underflow\n");
  else 
   {
   ptr= top;
   while(ptr!=NULL)
   {
     
     printf("\n%d " , ptr->data);
     ptr=ptr->next;
  }
   printf("\n");
  }
}

   

