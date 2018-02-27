#include<stdio.h>

void main()
{

  int arr[20],val,i,n,flag=0;
  printf("Enter the limit\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
     scanf("%d", &arr[i]); 
  printf("Enter the element to search\n");
  scanf("%d", &val);
  for(i=0;i<n;i++)
   {
      if(arr[i]==val){
          printf("Item found at %d position\n",i+1);
          flag=1;
          }
    }

  if(flag==0)
    printf("Item not found\n");
}
          
