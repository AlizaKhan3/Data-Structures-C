#include <iostream>

struct stack{
    int size;
    int *myArray;
};

void enqueue(stack* s, int value){
    if(s->rear == s->size - 1){   //rear is on size-1 index-->full
        std::cout<<"Queue is full, Queue Overflow";
    }
    else if(s->rear == -1 && s->front == -1){
        s->front = s->rear = 0;
        s->myArray[s->rear] = value;
        std::cout<<"Queue Value is= "<< value <<std::endl;
    }
    else{
        s->rear++;
        s->myArray[s->rear] = value;
        std::cout<<"Value-->"<<  s->myArray[s->rear] << std::endl;
    }
}

void dequeue(stack* s){
     if(s->rear == -1 && s->front == -1){
       std::cout<<"Empty queue";
    }
    else{
        s->front++;
         std::cout<<"deleted Value-->"<< s->myArray[s->front - 1] << std::endl;
    }
}

int main(){
    struct stack * myStack = new stack;
    myStack->size = 10;
    myStack->front = -1;
    myStack->rear = -1;
    myStack->myArray = new int[myStack->size];  // allocate memory for the array
    
    enqueue(myStack, 10);
    enqueue(myStack, 190);
    enqueue(myStack, 20);
    enqueue(myStack, 30);
    
    dequeue(myStack);
    return 0;
}
