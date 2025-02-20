#include<stdio.h>
#include<stdlib.h>

//to declare 2 int array and allocate memory dynamically then take another third array which should contain the values of both the arrays in sorted order
void sort(int *p,int size);

int main(){
   int N1,N2;
   printf("Enter the size of Array1:");
   scanf("%d",&N1);
   printf("Enter the size of array2:");
   scanf("%d",&N2);
   int *ptr1 = (int*)malloc(N1*sizeof(int));
   int *ptr2 = (int*)malloc(N2*sizeof(int));
   printf("size of Array3: %d\n",N1+N2);
   int *ptr3 = (int*)malloc((N1+N2)*sizeof(int));
   int arr1[N1];
   int arr2[N2];
   ptr1=arr1;
   ptr2=arr2;
   printf("Enter the elements of array1:");
   for(int i=0;i<N1;i++){
      scanf("%d",&arr1[i]);
      printf("Arr1[%d]=%d\n",i,arr1[i]);
   }

   printf("Enter the elements of array2:");
   for(int i=0;i<N2;i++){
      scanf("%d",&arr2[i]);
      printf("Arr2[%d]=%d\n",i,arr2[i]);
   }

   int arr3[N1+N2];
   ptr3=arr3;
   for(int i=0;i<(N1);i++){
      (arr3[i]=arr1[i]);
   }
   for(int i=N1;i<(N1+N2);i++){
    (arr3[i]=arr2[i-N1]);
 }
   printf("elements of array3:\n");
   for(int i=0;i<(N1+N2);i++){
     printf("Arr3[%d]=%d\n",i,*(ptr3 + i));
   }

  printf("sorted array:\n");
  sort(arr3,N1+N2);
  for(int i=0;i<(N1+N2);i++){
    printf("Arr3[%d]=%d\n",i,*(ptr3+i));
  }
  return 0;

}

void sort(int *p,int size){
 //int size = sizeof(int)/sizeof(p);
 int temp;
 for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++)  {
         if(*(p+j)>*(p+j+1)){
         temp=*(p+j);
         *(p+j)=*(p+j+1);
         *(p+j+1)=temp;

         }   
    } 
 }
}