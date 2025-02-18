#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");

    int a;
    fscanf(fptr, "%d", &a);  //reading from a file
    int b;
    fscanf(fptr, "%d", &b);  //reading from a file

    fclose(fptr);

    //now we will again open the file with the help of same pointer in write mode
    fptr = fopen("sum.txt","w");
    //now we will replace the numbers with their sum
    fprintf(fptr,"%d", a + b);

    fclose(fptr);
    return 0;
}