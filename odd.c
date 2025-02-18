#include<stdio.h>

//program to write aa the odd numbers from 1 to n in a file
int main(){
FILE *fptr;
fptr = fopen("oddnum.txt","w");
 int n;
 printf("Enter a number upto which odd nummbers have to find:");
 scanf("%d",&n);

 for(int i=1; i<=n; i++){
    if (i%2!=0){
       fprintf(fptr,"%d\t",i);
 }
 }
 return 0;

}