#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char stack[20];
int top=-1;
void push(char c)
{
  top++;
  stack[top]=c;
}

void pop()
{
   top--;
}
 
int pre(char c)
{
   if((c=='+') || (c=='-'))
       return 1;
   else if ((c=='*') || (c=='/'))
       return 2;
   else if (c=='')
      return 0;
   else 
   {
     printf("Invalid expression\n");
     exit(0);
   }
}

void main()
{
  int i;
  char infx[20];
  printf("Enter the infix exp\n");
  gets(infx);
  if(!isalpha(infx[0]))
  {
    printf("Invalid infix\n");
    exit(0);
  }

  for(i=1;infx[i]!='\0'; i++)
  {
     if(isalpha(infx[i]))
         printf("%c", infx[i]);
     else 
     {
        while(pre(infx[i])<=pre(stack[top]))
        {
            printf("%c" , stack[top]);
            pop();
        }

      push(infx[i]);
    }
  }

while(top!=0)
{
  printf("%c", stack[top]);
  top--;
}
}
