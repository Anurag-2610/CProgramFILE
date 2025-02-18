#include<stdio.h>

//to find maximum number between two numbers using a pointer

int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    if (*ptr1 > *ptr2){
        printf("%d is greater than %d",a,b);
    }
    else if (*ptr1 == *ptr2){
        printf("%d is equal to %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    return 0;


}