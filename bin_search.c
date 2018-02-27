#include<stdio.h>

int binary_search(int arr[],int low,int high,int val)
{
   if(high>low)
   {
      int mid=(low+high)/2;
      
      if(arr[mid]==val) 
          return mid;
      else if(arr[mid]>val)
          return binary_search(arr,low,mid-1,val);
      else
          return binary_search(arr,mid+1,high,val);
    }
    return -1;
}
void main()
{
   int arr[20],n,val,i;
   printf("Enter the limit\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for(i=0;i<n;i++)  
      scanf("%d",&arr[i]);
   printf("Enter the element to search\n");
   scanf("%d",&val);
   int result=binary_search(arr,0,n-1,val);
   if(result==-1)
      printf("Element not found\n");
   else
   printf("Element found at %d position\n",result+1);
}


