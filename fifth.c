#include<stdio.h>
int main(){
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    if (x >= '0' && x <= '9'){
      printf("character '%c' is a digit", x);
    } else {
      printf("Character '%c' is not a digit", x);
    }
    return 0;
}