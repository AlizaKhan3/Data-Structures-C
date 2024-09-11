//traversal in linked list
#include <iostream>

struct Node{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        std::cout << "Elements of linkedlist are %d/n : "<< ptr->data <<std::endl;
        ptr = ptr->next;
        // return 0;
    }
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

   LinkedListTraversal(head);
    return 0;
}
