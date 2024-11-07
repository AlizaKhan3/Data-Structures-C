#include <iostream>

struct node {
    int data;
    struct node* next;
};

void linkedListTraversal(struct node *ptr){
    while(ptr != NULL){
        std::cout<<"Elemets: "<<ptr->data <<std::endl;
        ptr= ptr->next;
    }
}

// struct node * deletionFirstNode(struct node *head){
//     struct node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }

struct node * deletionInBetween(struct node *head, int index){
    struct node *p = head;
    struct node *q = head->next;
    int i =0;
    while(i == index-1){
        p= p->next;
        q = q->next;
    }
   p->next= q->next;
   free(q);
    return head;
 }
 
 struct node * deletionInEnd(struct node *head){
     struct node *p = head;
     struct node *q = p->next;
     while(q->next != NULL){
         p=p->next;
         q=q->next;
     }
     p->next =NULL;
     free(q);
   
    return head;
 }



int main() {
   struct node *head;
   struct node *second;
   struct node *third;
   
   head = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
   
   head->data = 4;
   head->next = second;
   
   second-> data = 24;
   second->next = third;
   
   third->data = 5;
   third ->next = NULL;
   
   std::cout<<"Traversing list and displaying elements"<< std::endl;
   linkedListTraversal(head);
   std::cout<< std::endl;
  
   std::cout<<"Traversing list and displaying elements after deletion"<< std::endl;
//   head = deletionFirstNode(head);
//  head= deletionInBetween(head, 2);
 head = deletionInEnd(head);
    linkedListTraversal(head);
 
    return 0;
}
