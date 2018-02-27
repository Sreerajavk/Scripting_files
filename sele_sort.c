#include<stdio.h>
void main()
{
  int arr[30],n,i,j,temp,minpos;
  printf("Enter the limit\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
    minpos=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[minpos])
         minpos=j;
    }
    temp=arr[i];
    arr[i]=arr[minpos];
    arr[minpos]=temp;
  }
  printf("The sorted array is\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  printf("\n");
}

  
