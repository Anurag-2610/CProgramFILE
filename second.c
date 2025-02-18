#include<stdio.h>
int main(){
    int a,b,p;
    printf("Enter the sides of rectangle:\n");
    scanf("%d %d", &a , &b);
    p= 2*(a+b);
    printf("Perimeter of rectangle is %d", p);
    return 0;
}