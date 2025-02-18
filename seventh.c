#include<stdio.h>
#include<math.h>

int main(){
    int num, temp, rem, sum=0, digits=0;

    //input the number
    printf("Enter a number:");
    scanf("%d", &num);
    temp = num;

    // calculate the number of digits in the given number
    while (temp !=0){
        temp /=10;
        digits++;
       // printf("%d", digits);
    }
    

    temp = num;

    // calculating the sum of digits raised to the power of the number of digits
    while (temp !=0){
        rem = temp % 10;
        //temp /=10;
        sum = sum + pow(rem, digits);
        temp /=10;
    }

    printf("Number of digit in %d is %d\n", num, digits);
    printf("sum of digit raised to the power of the number of digits is %d\n", sum);

    // to check if the number is an armstrong number
    if (sum == num){
        printf("\n%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}