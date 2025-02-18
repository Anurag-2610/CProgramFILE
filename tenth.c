#include<stdio.h>
int main(){
    // to check if a number is prime or not
    int n ,p=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=2 ; i < n ; i++ ){
         if (n % i == 0){
            p = 0;
            break;
             }
            }
    if (p)
      printf("%d is a prime number. \n",n);
    else
      printf("%d is not a prime number. \n",n);

      return 0;
        }

      
        
            
        
            
         
         
           
        
   