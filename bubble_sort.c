#include<stdio.h>
void main()
{
  int arr[30],n,j,i,temp;
  printf("Enter the limit\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
   }
   printf("sorted arry is \n");
   for(i=0;i<n;i++)
     printf("%d ",arr[i]);
}

    
  
