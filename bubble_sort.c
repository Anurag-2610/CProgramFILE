#include<stdio.h>

//bubble sort implementation
void swap(int *a,int *b);
void bubble(int arr[],int size);


int main(){
    int Arr[8];
    printf("Enter elements of an array:\n");
    for(int i=0;i<8;i++){
        scanf("%d",&Arr[i]);
    }
    bubble(Arr,8);

    //printing sorted array
    printf("Sorted array:\n");
    for (int i=0;i<8;i++){
        printf("%d  ",Arr[i]);
    
    printf("\n");
    
    return 0;
}
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int arr[],int size){
    printf("The size of an array is %d\n",size);
    for(int i=0;i<size-1;i++){
        for(int j=0;j< size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    
}

