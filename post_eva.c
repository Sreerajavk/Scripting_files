#include<stdio.h>
#include<string.h>
#define max 30
float st[max];
int top=-1;
void push( float val)
{
  

    st[++top]=val;

}
float pop()
{
  float val;
  if(top==-1)
   {
    printf("Stack overflow\n");
   return 0;
   }
  else
   {
    val=st[top];
    top--;
  }
  return val;
}
float eva(char exp[])
{
  int i=0;
  float op1,op2,value;
  while(exp[i]!='\0')
  {
    if(isdigit(exp[i]))
      push((float)exp[i] - 48);
    else
     {
     op2 = pop();
     op1=pop();


    switch(exp[i])
    {
     case '+' : value = op1+op2;
                break;
     case '-': value = op1-op2;break;
     case '*' : value = op1*op2;break;
     case '/': value = op1/op2;break;
     }
   push(value); 
   }
  i++;
  }
  return pop(st);
 }

void main()
{
  float val;
  char exp[30];
  printf("Enter the postfix expression\n");
  scanf("%s" , exp);
  val=eva(exp);
  printf("Value of expression is %f\n",val);
}
     
