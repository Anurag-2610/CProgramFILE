#include<stdio.h>
#include<string.h>

//to check for pallindrom
int main(){
    char str[100];
    printf("Enter a string:\n");
    scanf("%s",str);
    int l = strlen(str);
    int d=0;
    for (int i=0; i< l/2;i++){
        if (str[i]==str[l-i-1]){
            d++;
        }
    }
    if (d==l/2){
    printf("%s is a palindrom string",str);
    }
    else {
    printf("%s is not a palindrom string",str);
    }
    

}