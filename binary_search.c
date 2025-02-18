#include<stdio.h>
#include<math.h>
//implementing binary search

int Bsearch(int arr[], int size, int item); //function declaration

int main(){
    int Arr[9];
    printf("Enter the elements of an sorted array:\n");
    for(int i=1; i<=9; i++){
       scanf("%d\n",&Arr[i]);
    }
    int target =87;
    int result= Bsearch(Arr,9,target);
    if (result !=-1){
        printf("Element is found at index %d",result);
    }
    else{
        printf("Element does not exist in an array");
    }

    return 0;
    

}
//function definition
int Bsearch(int Arr[],int N, int match){
      printf("The size of an sorted array is %d\n",N);
      printf("The element we need to search in sorted array:%d\n",match);
      int B,E,Mid;int Loc=-1;
      B=1;E=N;
      while (B<=N)
      {
        /* code */
        Mid=floor((B+E)/2);
        if (match==Arr[Mid]){
           Loc=Mid;
           return Loc; //return the indexof an element if it is found inside an array
           break;
        }
        else if(match>Arr[Mid]){
            B=Mid+1;
        }
        else{
            E=Mid-1;
        }
      }

      return Loc; //return -1 if element does not exist inside an array

}