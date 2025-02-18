#include<stdio.h>
#include<stdlib.h>
int main(){

    int *arr,size,newsize;
    printf("Enter the number of elements:");
    scanf("%d",&size);

    // Allocate memory dynamically
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements using pointer
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++){
        scanf("%d", (arr + i)); // it means pointer size increases by i datatype

    }

    //Ask user if they want to resize
    printf("\nEnter the new size of the array:");
    scanf("%d", &newsize);

    // Reallocate memory using realloc()

    arr = (int *)realloc(arr, newsize * sizeof(int));

    if (arr == NULL){
        printf("Memory reallocation failed!\n");
        return 1;

    }

    //if new size is larger, take additional input

    if (newsize > size){
        printf("Enter %d more elements:\n", newsize - size);
        for(int i = size; i < newsize; i++){
            scanf("%d", arr + i);
        }
    }

    // print the array after reallocation
    printf("updated array elements:\n");
    for (int i = 0; i < newsize; i++){
        printf("%d ", *(arr + i));

    }
    printf("\n");
    //Traverse and print the array using pointer
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", *(arr + i)); //Accessing vlaue using pointer

    }

    //free dynamically allocated memory
    free(arr);
    return 0;
}