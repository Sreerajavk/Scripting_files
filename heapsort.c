#include<stdio.h>

int heap(int* a,int* b,int end,int count);

//swap and display function
int swap(int* a,int start,int n)
{

  int temp;
  temp=a[start];
  a[start]=a[n-1];
  a[n-1]=temp;
  return temp;
  
}

void display(int a[],int n)
{
  int i;
  for(i=0 ;i<n ; i++)
  {
    printf("\n%d\n", a[i]);
  }
}
 
//main function
void main()
{
  int i,n,A[10],retval;
  printf("Enter the size of array ");
  scanf("%d",&n);
  int sorted[n];
  for(i=0 ;i<n ; i++)
  {
    printf("Element %d: ", i);
    scanf("%d",&A[i]);
  }
  
  
  //--------------
  retval=heap(A,sorted,n-1,0);
  if(retval==0)
  {    display(sorted,n);  }
  else
  {    printf("Sorting failed");  }

  //-----------------
  
}

//heapsort
int heap(int* a,int* b,int end,int count)
{
  int j,flag=0;
  for(j=0 ; j<= end/2 ; j++)
  {
    if(a[j] < a[2*(j+1)])
    { 
       if(a[j] < a[2*(j+1)+1])
       {   swap(a,j, 2*(j+1)+1);
           flag++; }
    } 
    
    
    else
    {     
       swap(a,j,2*(j+1));
       if(a[j] < a[2*(j+1)+1])
       {  swap(a,j,2*(j+1)+1);
          flag++;  }   
    }
            
  }
  
  
  if(flag!=0)
  {   b[count]=swap(a,0,end);
      printf("displaying sorted element %d- %d",count,b[count]);
      heap(a,b,end-1,count+1);  }
  
  else
  {   return 0; }
  
}
  




























