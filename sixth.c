#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);
    if (a>b)
       printf("%d is smaller than %d", b, a);
    else if (a==b)
       printf("%d is equal to %d", b, a);
    else 
       printf("%d is smaller than %d", a, b);
    return 0;
}