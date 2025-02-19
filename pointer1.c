#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//to reverse string using pointer and remove spaces

void reverse(char *d);
void removespace(char *b);

int main(){
    int N;
    printf("Enter the size of string:");
    scanf("%d",&N);
    char *p;
    p = (char*)malloc(N*sizeof(char));
    printf("enter string:");
    scanf("  %[^\n]",p);
    reverse(p);
    
        printf("reverse string:%s\n",p);
    
    printf("revere string without space:");
    removespace(p);
    
}
void reverse(char *ptr){
    int i;
    int l = strlen(ptr);
    for(i=0;i<l/2;i++){
        char x = *(ptr + i);
        char y = *(ptr + l-i-1);
        *(ptr + i) = y;
        *(ptr + l-i-1) = x;
    }
}
void removespace(char *p){
    int l=strlen(p);
    int i;
    for( i=0; i<l; i++){
        if(*(p+i)==' '){
            continue;
    }
    else{
        printf("%c",p[i]);
    }
    
}
}