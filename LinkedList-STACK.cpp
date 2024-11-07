#include <iostream>

struct node {
    int data;
    struct node* next;
};

struct node *top =0;
 void displayLinkedListUsingStack(){
     struct node *head;
     head = top;
     if(top == 0){
         std::cout<< "Stack underflow/empty"<<std::endl;
     }
     else{
         while(head != 0){
            std::cout<< "Linkedlist Stack elemets: "<< head->data<<std::endl;
            head= head->next;
         }
     }
 }

void push(int x){
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = x;
    head->next= top;
    top = head;
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == 0){
        std::cout<< "Stack underflow/empty"<<std::endl;
    }
    else{
        std::cout<< "Popped elemet is "<< top->data<<std::endl;
        top=top->next;
        free(temp);
    }
}

void peek(){
    struct node * head;
    head = top;
    if(top== 0){
        std::cout<< "Stack underflow/empty"<<std::endl;
    }
    else{
         std::cout<< "Peeked element is "<< top->data <<std::endl;
    }
}

int main (){
      push(6);
      push(10);
      push(3);
      push(12);
      push(7);
      push(5);
      displayLinkedListUsingStack();
      pop();
      displayLinkedListUsingStack();
      peek();
      return 0;

}
  
