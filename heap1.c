#include<stdio.h>


void heapup(int heap[], int i){


   int j, temp, n, flag=1;
   n=heap[0];
   while(2*i<=n && flag==1){
      j=2*i;
     if(j+1<=n && heap[j+1]>heap[j])
    j+=1;
    if(heap[i]>heap[j])
     flag=0;
    else{

    temp=heap[i];
    heap[i]=heap[j];
    heap[j]=temp;
   i=j;

       }

    }


}


void create(int heap[]){

  int i,n;
  n=heap[0];
  for(i=n/2;i>=1;i--)
        heapup(heap, i);


  }





void main(){


  int heap[100], n, i, last, temp;
  printf("\nEnter the limit\n ");
  scanf("%d",&n);
  printf("Enter the elements\n ");
  for(i=1;i<=n;i++)
     scanf("%d", &heap[i]);
  heap[0]=n;
  create(heap);
  while(heap[0]>1){

    last=heap[0];
    temp=heap[1];
    heap[1]=heap[last];
    heap[last]=temp;
    heap[0]--;
   heapup(heap, 1);

   }

   printf("\nSorted Array \n");
   for(i=1;i<=n;i++)
      printf("%d ", heap[i]);
   }
