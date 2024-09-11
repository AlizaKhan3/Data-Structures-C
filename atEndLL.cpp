//traversal in linked list
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

// Case2: inserting element at End
struct Node * insertAtEnd(struct Node * head, int data){
    struct Node * ptr  = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
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

    //Assigning data and next to each Node
    head->data = 7;
    head->next = second;
    
    
    second->data = 14;
    second->next = third;
    
    third->data = 28;
    third->next= NULL;

    // LinkedListTraversal(head);   //old list
    head = insertAtEnd(head, 89098);   //placed new one at head position
    LinkedListTraversal(head); //new list 

    return 0;
}  
