#include<stdio.h>

//printing the marks of students stored in the form of an array using function
void marks(int score[],int j);
int main(){
     int arr[5];
      printf("Enter the marks of 5 students:\n");
      for( int i=0; i<5; i++){
        scanf("%d",&arr[i]);
      }
      marks(arr,5);
      return 0;
}

void marks( int score[],int j){
    
       printf("No. of elements of an array are %d\n", j);
       for (int i=1; i<=j; i++ ){
        printf("The marks  of %d student is %d\n",i, score[i]);
       }
}