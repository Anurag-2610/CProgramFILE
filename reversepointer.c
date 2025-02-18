#include<stdio.h>

//to print the array of integer in reverse order
void reverse(int Arr[10]);
int main(){
    int arr[10]={10,45,34,67,89,67,32,59,90,19};
    printf("original array:\n");
    for(int i=0; i<=9; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Reverse Array:\n");
    reverse(arr);
    for(int i=0; i<=9; i++){
    printf("%d ",arr[i]);
}
}

void reverse(int Arr[10]){
    int *ptr=Arr;
    for(int i=0;i<5;i++){
        int x = *(ptr + i);
        int y = *(ptr + 9-i);
        *(ptr + i) =  y;
        *(ptr + 9 -i) = x;
    }
}