#include<stdio.h>
int main()
{
  int arr[30],n,i,j,temp;
  printf("Enter the limit\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=1;i<n;i++)
  {
    j=i;
    while(j>0 &&arr[j-1]>arr[j])
    {
      temp=arr[j];
      arr[j]=arr[j-1];
      arr[j-1]=temp;
      j--;
    }
   }
  printf("Sorted array is\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
  
