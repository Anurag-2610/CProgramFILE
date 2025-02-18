#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
}; //structure named Node is defined
   //A structure in C is used to group multiple variables together.

    void linkedlistTraversal(struct Node * ptr){  //defining a function for traversal in a linked list
        while(ptr!=NULL){
        printf("Element:%d\n", ptr -> data);
      ptr = ptr -> next;
    }
}


   int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
     //before allocation memory is uninitialized
    head = (struct Node *) malloc(sizeof(struct Node)); //memory allocation
    //dynamically allocates memory for a Node in the heap
    //calculates how many memory node require
    //malloc() dynamically allocates memory but returns a void*
    //Since void * is not automatically converted to another pointer type in C ,we explicitly typecast it.
    
   // Allocates memory for nodes in the linked list in heap
    second = (struct Node *) malloc(sizeof(struct Node));
    third =(struct Node *) malloc(sizeof(struct Node));
    
    //link first and second nodes
    head->data =7;   //equivalent to (*head).data
    head->next = second; //equivalent to (*head).next

    // link second and third nodes
    second->data =27;   //equivalent to (*second).data
    second->next = third; 

    // Terminate the list at the third node

    third->data =57;   //equivalent to (*head).data
    third->next = NULL;


    linkedlistTraversal(head);

    
    
    return 0;

   }