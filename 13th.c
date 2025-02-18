#include<stdio.h>
#include<math.h>

//to find square root of a number

float sqrtt(int n);

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Square root of %d is %f",a, sqrtt(a));
    return 0;


}

float sqrtt(int b){
    float x = sqrt(b) ;
    return x;

}