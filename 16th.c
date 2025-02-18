#include<stdio.h>

//to print the element of an array in reverse order

int main(){
    int marks[5] = {3, 4, 5, 6, 7};
    int size = sizeof(marks) / sizeof(marks[0]);
    //calculating number of elements in an array

    printf("Array elements:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", marks[i]); //printing each elements

    }
    printf("\n");
    printf("Array elements in reverse order:\n");
    //printing array elements in reverse order
    for (int j = size -1; j>=0; j--){
        printf("%d ", marks[j]);
    }
    return 0;
}