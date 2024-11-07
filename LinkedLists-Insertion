#include <iostream>

struct Node {
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        std::cout << "Elements of linked list: " << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtBeginning( struct Node *head, int newdata){
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->next = head;
        ptr->data = newdata;
        return ptr;
}

struct Node * insertInBetween(struct Node *head, int newdata, int index){
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i =0;
    while(i<index){
        ptr->data = newdata;
        ptr->next = p->next;
        p->next = ptr;
        return head;
    }
}

struct Node * insertAtEnd(struct Node *head, int data){
    
    struct Node * ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node * p = head;
     
  while(p->next !=NULL){
      p = p->next;
  }
  p->next=ptr;
  ptr->next=NULL;
  ptr->data = data;
  return head;
}


int main() {
    // Creating Nodes
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocating memory in heap to each node
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assigning data and next to each Node
    head->data = 7;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 28;
    third->next = NULL;

    std::cout << "Before insertion:" << std::endl;
    LinkedListTraversal(head);

    std::cout<<"After Insertion Operation"<< std::endl;
    //  LinkedListTraversal(head);
    // insertInBetween(head, 100, 2);
    insertAtEnd(head, 80);
    LinkedListTraversal(head);

    return 0;
}
