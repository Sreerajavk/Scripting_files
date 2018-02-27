#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 17
int n;
struct node{
   int coeff;
   struct node *next;
}node;
struct node *p;
struct node *h3,*p;
struct node *init(int );
struct node *h1=NULL,*h2=NULL,*h4=NULL,*h3=NULL;
void read1();
void read2();
void print(struct node *h1);
struct  node *add(struct node *h1, struct node *h2,int);
struct  node *multiply(struct node *h1,struct node *h2);

void main()
{
 
  int option;
  do
  {
   printf("Enter 1 for read first polynomial\n2 to read second polynmial\n3 to add\n4 to multiply\n6 to exit\n");
  scanf("%d", &option);
  switch(option)
   {
    case 1:  printf("enterd");
             
              read1();break;
    case 2: printf("enterd");
            read2();
            break;
    case 3: printf("Enterd");
            h3=add(h1,h2,n);
            print(h3);
            break;
    case 4: 
            printf("enterd");
            h3=multiply(h1,h2);
            print(h3);
            break;
    default: printf("Invalid choice\n");
  }
 }while(option!=6);
}

void read1()
{
  int i,j,power,coeff,n;
  
  struct node *p,*h;
 
  
  printf("Enter the order\n");
  scanf("%d", &n);
  h=init(n);
  for(i=0;i<=n;i++)
  {
    scanf("%d %d",&power,&coeff);
    for(p=h,j=0;j<power ;j++)
        p=p->next;
    p->coeff=coeff;
  }
  printf("returned");
  h1=p;
}

void read2()
{
  int i,j,power,coeff,n;
  
  struct node *p,*h;
 
  
  printf("Enter the order\n");
  scanf("%d", &n);
  h=init(n);
  for(i=0;i<=n;i++)
  {
    scanf("%d %d",&power,&coeff);
    for(p=h,j=0;j<power ;j++)
        p=p->next;
    p->coeff=coeff;
  }
  printf("returned");
  h2=p;
}

void print(struct node *ptr)
{
   int i;
   printf("print");

   for(i=0;ptr!=NULL;ptr=ptr->next,i++)
   {
        if(ptr->coeff!=0)
             printf("%dx^%d ",ptr->coeff,i);
             
   }
   printf("void");
 }

struct node *add(struct node *h1,struct node *h2,n)
{
  struct node *h3;
  h3=init(n);
  p=h3;
  printf("returned dto add");
  while(h3!=NULL)
  {
   h3->coeff=h1->coeff+h2->coeff;
   h1=h1->next;
   h2=h2->next;
   h3=h3->next;
   }
  return (h3);
 }

struct node *multiply(struct node *h1,struct node *h2)
{
  struct node *h3,*p,*q,*r;
  int i, j ,k,coeff,power;
  h3=init(n);
  
  for(p=h1,i=0;p!=NULL;p=p->next,i++)
  {
    for(q=h2,j=0;q!=NULL;q=q->next,j++)
    {
      coeff=p->coeff*q->coeff;
      power=i+j;
      printf("\n %d %d",coeff,power);
     for(r=h3,k=0;k<power;k++)
           r=r->next;
     printf("%d",coeff);
     r->coeff=r->coeff+coeff;
     
   }
  
  }
  return(h3);
 }

struct node *init(int n)
{
  int i;
  int k=n;
  
  printf("%d",k);
  struct node *h=NULL,*p;
  for(i=0;i<k+1;i++)
  {
   printf("Initialised");
   p=(struct node*)malloc(sizeof(struct node));
   p->next=h;
   p->coeff=0;
   h=p;
 }
  if(h==NULL)
     printf("Null");
  return h;
}
   
  

