#include<stdio.h>

//program to print all the letter in english alphabet using a pointer


int main(){
    char *ptr,*ptr1; //pointer to char
    char alphabet = 'A';

    // print uppercase alphabet
    printf("uppercase English Alphabet:\n");
    ptr = (char *) 65; // point to the address of 'alphabet'
    for (int i = 0; i < 26; i++){
        printf("%c ", *(ptr + i)); //Dereference and print each letter
    
    }

    printf("\n");

    // print lowercase alphabet
    char Alphabet = 'a'; // start with the lowercase 'a'
    printf("Lowercase English alphabet:\n");
    ptr1 = &Alphabet; // point to the address of 'alphabet'
    for (int i = 0; i < 26; i++){
        printf("%c ", *(ptr1 + i)); //Dereference and print each letter

    }
    return 0;

    

}