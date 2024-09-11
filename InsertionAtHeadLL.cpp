//Insertion in linked list
#include <iostream>

struct Node{
    int data;
    struct Node *next;
};

//function of pointing each Node
void LinkedListTraversal(struct Node *ptr){    
    while(ptr!=NULL){
        std::cout << "Elements of linkedlist are: "<< ptr->data<<std::endl;
        ptr = ptr->next;
    }
}

// Case1: inserting element at HEAD
struct Node * insertAtHead(struct Node * head, int data){
  
    struct Node * ptr  = (struct Node*)malloc(sizeof(struct Node));   //creating space in heap memory for the new element
    ptr->next =head;   //pointing ptr's next to old head data
    ptr->data =data;   //getting ptrs's data from integer value
    return ptr;        //return ptr means returning to head 
}

int main() {
    //Creating Nodes
   struct Node  * head;
   struct Node * second;
   struct Node * third;
   
   //Allocating memory in heap to each node
   head = (struct Node*)malloc(sizeof(struct Node));
   second = (struct Node*)malloc(sizeof(struct Node));
   third = (struct Node*)malloc(sizeof(struct Node));
    // std::cout << "Try programiz.pro";
    
    //Assigning data and next to each Node
    head->data = 7;
    head->next = second;
    
    
    second->data = 14;
    second->next = third;
    
    third->data = 28;
    third->next= NULL;

    // LinkedListTraversal(head);   //old list
    head = insertAtHead(head, 1);   //placed new one at head position
    LinkedListTraversal(head); //new list 

    return 0;
}  
