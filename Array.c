#include<stdio.h>

int main(){
    int size;

    printf("Enter the number of elements:");
    scanf("%d",&size);

    int arr[size]; //declaring an array

    //input array elements
    printf("Enter %d elements:\n",size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    //traverse and print the array
    printf("Array elements are:\n");
    for (int i =0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}