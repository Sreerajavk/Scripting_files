#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *ptr;
}*head , *end;

void queue()
{
   struct node *newnode;
   newnode = (struct node *)malloc(sizeof(struct node));
   printf("Enter the element\n");
   scanf("%d", &newnode->data);
  newnode->ptr= NULL;
   if((head==NULL) || (end==NULL))
   {
     head = newnode;
     end = newnode;
   }
  else
   {
   end->ptr = newnode;
   
   end = newnode;
   }
}

void dequeue()
{
  struct node *temp = head;
  if(head == NULL)
   printf("Queue is empty\n");
  else
   {
    printf("Dequeued elements is %d", head->data);
    head = temp->ptr;
    
   
   }
   free(temp);
}
void display()
{
  struct node *current = head;
  if(head == NULL)
    printf("Queue is empty\n");
  else
  {
  printf("Elements are\n");
  while(current!=NULL)
  {
    printf("%d  ",current->data);
    current = current->ptr;
  }
  }
}

void main()
{
   int f=1,ch;
   printf("Enter 1 for queue\n2 for dequeue\n3 for display\n4 to exit\n");
   while(f)
   {
     printf("\nEnter your choice\n");
     scanf("%d" , &ch);
     switch(ch)   
     {
      case 1: queue();
              break;
      case 2: dequeue();break;
      case 3: display(); break;
      case 4: f=0;break;
      default: printf("Invalid choice\n");
     }
   }
}
  

