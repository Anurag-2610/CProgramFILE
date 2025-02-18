#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n = 500;

    // Allocating memory for 500 integers using calloc
    ptr = (int*)calloc(n, sizeof(int));

    // check if memory allocation was successful
    if (ptr == NULL){
        printf("Memory allocation failed!\n");
        return 1; // Exit with an error
    }

    // storing the first 500 natural numbers
    for (int i = 0; i < n; i++){
        ptr[i] = i + 1;
    }

    // Printing first 10 numbers to verify
    printf("First 10 natural numbers stored:\n");
    for (int i = 0; i < 500; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;

}