#include<stdio.h>
#include<math.h>
int main(){
    //to check if the given number is a natural number
    float n;
    printf("Enter a number");
    scanf("%f",&n);
    if (n>=1 && floor(n) ==n ){
      printf("%f is a natural number", n);
    } else {
      printf("%f is not a natural number", n);
    }
    return 0;
}