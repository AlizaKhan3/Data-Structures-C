#include <iostream>

struct Node{
    int data;
    struct Node * next;
};

struct Node * top = 0;  //initial value of top is set to 0 refers to Empty Stack

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

void Peek(){   //pop operation is basically peek
     if(top == 0){
        std::cout<<"Stack is empty" << std::endl;
    }
    else{
        std::cout<<"The peek value is "<< top->data<<std::endl;
    }
}

//as topmost value from peek is out now we'll pop the free space
void pop(){
    struct Node * temp;
    temp = top;
    if(top == 0){
        std::cout<<"STACK UNDERFLOW"<<std::endl;
    }
    else{
        std::cout<<"The popped element is"<< top->data<<std::endl;
        top = top->next;
        free(temp);
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
   
   
   pop();  //removes the element from stack and free space in stack 

   Peek();   //prints the next top value of stack after pop function
   
    return 0;
}
