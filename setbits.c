#include<stdio.h>
//to count the number of set bits

int setbits(int n);

int main(){
   int N ;
   printf("Enter a number:");
   scanf("%d",&N);
   printf("Number of set bits are %d",setbits(N));
}

int setbits(int num){
  static int a; //static variable is defined to count no. of times function is called
  
  //printf("%d",a);
  int x = ((num) & (num-1));
  ++a;
  if(x){
    setbits(x);
  }
  return a;
  
}