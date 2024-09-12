#include <iostream>

struct Node{
    int data;
    struct Node * next;
};

struct Node * top = 0;

void pushElementInStack(int dataValue){ 
    struct Node * head;
    // head = (struct Node *)malloc(sizeof(struct Node));
    head = new Node; //alternate of malloc in C++
    head->data = dataValue;
    head->next = top;
    top = head;
}

void displayLIinkedListInStack(){
    struct Node * head;
    head = top;
    if(top == 0){
        std::cout<<"Stack is empty" << std::endl;
    }
    else{
        while(head != 0){
            std::cout<<"The data available in stack is "<< head->data<<std::endl;
            head = head->next;
        }
    }
}

int main(){
   pushElementInStack(2);
   pushElementInStack(3);
   pushElementInStack(4);
   pushElementInStack(100);
   pushElementInStack(899);
   pushElementInStack(22);

   displayLIinkedListInStack();
    
    return 0;
}
