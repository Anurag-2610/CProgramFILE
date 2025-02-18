#include<stdio.h>

void temp();
int main(){
    int t;
    printf("Enter temp. in degrees:");
    scanf("%d",&t);
    temp(t);
    return 0;

}

void temp(int temperature){

   if (temperature >= 25){
    printf("hot");
   }
   else{
    printf("Cold");
   }

}