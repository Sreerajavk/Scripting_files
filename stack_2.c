#include<stdio.h>
int size = 20;
int stack[20];
int top1=-1, top2= 20;
void push_stack1(int data)
{
  if(top1 <top2-1)
      stack[++top1] = data;
  else
  printf("stack full");
}

void push_stack2(int data)
{
  if (top1<top2-1)
    stack[--top2] = data;
 else
   printf("stack full\n");
}

void pop_stack1()
{
  if (top1>0)
   {
    int pop = stack[top1--];
    printf("%d is popped out\n" , pop);
   }
  else
    printf("stack is empty\n");
}

void pop_stack2()
{
   if(top2< size)
   {

   int pop = stack[top2++];
   printf("%d is popped out" , pop); 
  }
  else 
   printf("stack2 is empty\n");
 }

void print_stack1()
{
  int i;
  for(i=top1 ; i>=0; i--)
   printf("%d " , stack[i]);
  printf("\n");

}

void print_stack2()
{
   int i ;
   for(i=top2 ; i<size; i++)
     printf("%d " , stack[i]);
   printf("\n");
}


void main()
{

   int choice1, choice2, f=1, data , p=1,n;
   while(f)
   {

    printf("Enter 1 for stack1\n      2 for stack2\n");
    scanf("%d", &choice1);
    switch(choice1)
    {
      case 1:
              
              while(p)
             
              {
                 printf("Enter 1 for push\n2 for pop\n3for display\n4 to exit\n");
                 scanf("%d" , &choice2);
                switch(choice2)
                 {
                   case 1: printf("Enter the value\n");
                           scanf("%d" , &data);
                           push_stack1(data);
                           break;
                   case 2: pop_stack1();
                           break;
                   case 3: print_stack1();
                           break;
                   case 4: p=0; 
                           break;
                   default: printf("Invalid choice\n");
                            break;
                 }
             }
      case 2: 
              
              while(p)
              {
                printf("Enter 1 for push\n2 for pop\n3for display\n4 to exit\n");
                scanf("%d" , &choice2);
                switch(choice2)
                 {
                   case 1: printf("Enter the value\n");
                           scanf("%d" , &data);
                           push_stack2(data);
                           break;
                   case 2: pop_stack2();
                           break;
                   case 3: print_stack2();
                           break;
                   case 4: p=0; 
                           break;
                   default: printf("Invalid choice\n");
                            break;
                 }
              }
       case 3:  f=0;
                break;
       default: printf("Invalid choice\n");
                break;
    }
  }
}
           
                    


               
