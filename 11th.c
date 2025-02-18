#include<stdio.h>

    //program to print prime number in a range
    int isprime(int n);
       

    int main(){
        int m,n1;

        // Taking user input for range
        printf("Enter the start of the range: ");
        scanf("%d", &m);
        printf("Enter the end of the range: ");
        scanf("%d", &n1);

        // Printing prime numbers in the given range
        printf("Prime numbers between  %d and %d are: ", m, n1);
        for (int i = m; i <=n1; i++){
            if (isprime(i))
              printf("%d ", i);
        }
        printf("\n");
        return 0;
    }

    int isprime(int n){
        if (n < 2)
        return 0;
        for (int i = 2; i<=n; i++){
            if (n%i == 0)
             return 0;
        }
        return 1;
    }
   
