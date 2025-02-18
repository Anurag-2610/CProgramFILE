#include<stdio.h>

//to find sum of digits of a number

int sum(int n);

int main(){
   int a;
   printf("Enter a number:");
   scanf("%d",&a);
   printf("sum of digits of %d is %d", a, sum(a));
   return 0;
}

int sum(int n){
    int temp,rem,s=0 ,digits=0;
    temp=n;
    while(temp != 0){
        rem = temp%10;
        temp/=10;
        digits++;
        s+=rem;
        }
        //printf("Sum of digits are %d",s);
        return s;

}