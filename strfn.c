#include<stdio.h>
int strleng(char st[])
{
  int i, len=0;
  for(i=0;st[i];i++)
    len++;
  return len;
}

void strcopy()
{
  int i=0;
  char st1[20],st2[20];
  printf("Enter the string 1\n");
  scanf("%s", st2);
  printf("Enter the stirng 2\n");
  scanf("%s", st2);
  int n=strleng(st1);
  printf("string 1 after copying\n");
  for(;st2[i]!='\0';i++)
      st1[i]=st2[i];
  st1[i]='\0';
  printf("%s\n",st1);
}

void stringcmp()
{
  int i=0;
  char st1[20],st2[20];
  printf("Enter the string 1\n");
  scanf("%s",st1);
  printf("Enter the string 2\n");
  scanf("%s", st2);
  if(strleng(st1)!=strleng(st2))
  {
     printf("Not equal\n");
     return;
  }

  else
   {
      for(;i<strleng(st1);i++)
      {
         if(st1[i]!=st2[i])
         {
             printf("Not equal\n");
             return;
         }
       }
      printf("Given strings are equal\n");
   }
}

void main()
{
  char st1[20],st2[20];
  int choice;
  printf("1 for length\n2 for copy\n3 for compare\n4 to exit\n");
  do
  {
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
     case 1: printf("Enter the string\n");
             scanf("%s", st1);
             printf("length is %d\n",strleng(st1));
             break;
     case 2: strcopy();
             break;
     case 3: stringcmp();
             break;
     case 4: break;
     default: printf("Invalid choice\n"); 
    }
   }while(choice!=4);
 }
    
  
   
