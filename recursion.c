#include<stdio.h>
//to implement recursion

int fact(int n);//function declaration

int main(){ //function calling
    int m ;
    printf("Enter the number whose factorial has to be determine:");
    scanf("%d",&m);
    printf("The factorial of %d is %d", m,  fact(m));
    return 0;
}

int fact(int C){ //function definition
    if (C==1){
        return 1;
    }
    int f;
    f=C*fact(C-1);
    return f;
}