#include<stdio.h>
int main(){
    float a, b, c, avg;
    printf("Enter 3 numbers\n");
    scanf("%f %f %f",&a, &b, &c);
    avg = (a+b+c)/3;
    printf("Average of numbers %f %f %f is %f", a, b, c, avg);
    return 0;

}