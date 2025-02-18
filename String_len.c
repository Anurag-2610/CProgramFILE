#include<stdio.h>

int Anurag_Strlen(char str[]);

int main(){
    char str[8];
    printf("Enter a String:");
    scanf("%s",str);

    int S = Anurag_Strlen(str);
    printf("The length of string %s is %d",str,S);
    
}

int Anurag_Strlen(char str[]){
    int d=0;
    for(int i=0;str[i]!='\0';i++){
      d++;
    }
        return d;
}