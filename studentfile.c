#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name :");
    scanf("%s",name);
    printf("enter age :");
    scanf("%d",&age);
    printf("enter cgpa :");
    scanf("%f",&cgpa);

    //writing to a file
    fprintf(fptr, "%s\t", name);
    
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);



    fclose(fptr);
    return 0;

}