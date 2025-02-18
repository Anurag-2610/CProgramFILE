#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r"); //we have to read 5 integrs from a file
    int n;
    fscanf(fptr,"%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr,"%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr,"%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr,"%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr,"%d", &n);
    printf("number = %d\n", n);

    fclose(fptr);
    return 0;


}