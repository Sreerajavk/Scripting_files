#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  char str[50],sub[50];
  int i , j ,len2,len1,pos, k, flag=0;
  printf("Enter the sring\n");
  gets(str);
  printf("Enter the subarray\n");
  gets(sub);
  len1=strlen(str);
  len2=strlen(sub);
  if(len1<len2)
  {
     printf("Invalid substring");
     exit(0);
  }

  for(i=0;i<len1;i++)
  {
  pos=k=i;
  for (j=0;j<len2;j++)
  {
    if(sub[j]==str[k])
        k++;
    else
        break;
  }
  
  if(j==len2)
  {
    flag=1;
    break;
  }
  }
  if(flag==1)
    printf("substring found at %d position\n", pos+1);
  else
    printf("substring not found\n");
  
}
