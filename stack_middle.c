#include<stdio.h>
#define size 4
int stack[size];
int top1=-1;
int top2=size/2-1;
void push1(int data)
{
  if(top1<top2){
     top1++;
  
     stack[top1]=data;}
  else
     printf("stack overflow\n");
}

void push2(int data)
{

  if(top2<size){
   top2++;
   stack[top2]=data;}
  else 
   printf("stack is full\n");
}

void pop1()
{
  int i;
  if(top1>=0)
   {
    i=stack[top1--];
    printf("popped element is %d",i);
   }
  else
   printf("stack is empty\n");
}
void pop2()
{ 
   int i;
  if(top2>size/2-1){
     i=stack[top2--];
     printf("popped element is %d\n", i);}
  else
    printf("stack is empty\n");
}

void display1()
{
  int i;
  for(i=top1;i>=0;i--)
      printf("%d ",stack[i]);
  printf("\n");

  }

void display2()
{
  int i;
  for(i=top2;i>size/2-1;i--)
    printf("%d ",stack[i]);
  printf("\n");
}

int main()
{
  int choice2 , choice1,f=1,p,data;
  printf("%d",top2);
  while(f)
  {
    p=1;
    printf("Enter 1 for stack1\n2 for stack2\n3 to exit\n");
    scanf("%d", &choice1);
    
    printf("1 for push\n2 for pop\n3 for display\n4 to exit\n");
     switch(choice1){
      case 1 : 
                while(p)
                {
                  printf("Enter your choice\n");
                  scanf("%d",&choice2);
                  switch(choice2)
                  {
                     case 1:
                              printf("Enter the value\n");
                              scanf("%d",&data);
                              push1(data);
                              break;
                     case 2:  pop1();break;
                     case 3 : display1();break;
                     case 4: p=0;break;
                     default: printf("Invalid choice\n");
                  }
                }
       case 2 : 
                while(p)
                {
                  printf("Enter your choice\n");
                  scanf("%d", &choice2);
                  switch(choice2)
                  {
                     case 1:
                              printf("Enter the value\n");
                              scanf("%d",&data);
                              push2(data);
                              break;
                     case 2:  pop2();break;
                     case 3 : display2();break;
                     case 4: p=0;
                     default: printf("Invalid choice\n");
                  }
                }
         case 3: if(p==1){f=0;
			break;}
	
               
         
         
       
   }
   }
   return 0;
}

  
  


 
