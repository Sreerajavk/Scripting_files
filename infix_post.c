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

char pop()
{
   if(top==-1)
     return -1;
   else 

    return stack[top--];
}
 
int pre(char c)
{
   if((c=='+') || (c=='-'))
       return 1;
   else if ((c=='*') || (c=='/'))
       return 2;
   else if (c=='(')
      return 0;
   
}

void main()
{
  char exp[20];
  char *e,x;
  printf("Enter the expresion\n");
  scanf("%s",exp);
  e=exp;
  while(*e!='\0')
  {
   if(isalpha(*e))
     printf("%c" ,*e);
   else if(*e == '(')
     push(*e);
   else if(*e==')')
    {
      while((x = pop())!='(')
           printf("%c", x);
    }
  else
  {
   while(pre(stack[top])>=pre(*e))
      printf("%c", pop());
   push(*e);
 }
 e++;
}

while(top!=-1)
   printf("%c", pop());
printf("\n");

}
  
