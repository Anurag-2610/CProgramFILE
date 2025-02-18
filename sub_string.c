#include<stdio.h>
#include<string.h>


//to find substring in a string

void substring(char str[], int start, int end);

int main(){
    char string[100];
    int S,N;
    printf("Enter a string:\n");
    scanf("%s",string);
    printf("Enter the starting index of substring:\n");
    scanf("%d",&S);
    printf("Enter the ending index of substring:\n");
    scanf("%d",&N);

    substring(string, S, N);
   
    


}

void substring(char Arr[],int B, int E){
    int length=strlen(Arr);
    if (B>=length){
        printf("limit is out of range:\n");
    }
    int i;
    for( i=B;i<=E;i++){
        if (Arr[i]=='\0')//stop if we reach end of string
         break;
         printf("%c", Arr[i]);//printing character by character
         
    }
    

}
    