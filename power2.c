#include<stdio.h>

//to check if a number is a power of 2 or not using bit operation
int power2(int n);

int main(){
    int N;
    printf("Enter a number:");
    scanf("%d",&N);
    if(power2(N)){
        printf("%d is a power of 2",N);
    }
    else{
        printf("%d is not a power of 2",N);
    }
    return 0;

}

int power2(int num){
    return (num && !((num) & (num-1)));
}