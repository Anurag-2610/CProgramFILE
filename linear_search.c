#include<stdio.h>

//C program to implement linear search

int Lsearch(int arr[], int size, int item);

int main(){
    int arr[5];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int target=8;
    int result=Lsearch(arr,5,target);
    if(result!=-1){
        printf("Target item is found at index %d\n",result);
    }
    else{
        printf("Target item is not found in an array\n");
    }
    return 0;

}

int Lsearch(int arr[], int size, int item){
    printf("the size of an array is %d\n",size);
    printf("Target item is %d\n",item);
    printf("Array elements are:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    
    }
    for(int i=0;i<size;i++){
        if(arr[i]==item){
            return i; //return the index if target is found
        }
    }
        return -1; //return -1 if target is not found
    

}