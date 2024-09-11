// Create a stack in C++ using pointers and implement push and pop operations

#include <iostream>

struct stack {
    int size;
    int top;
    int * arr;
};

// Checking if stack is empty
int isEmpty(struct stack * s){
    if(s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

// Checking if stack is full
bool isFull(struct stack * s){
 if(s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

// Push operation - Adds an element to the top of the stack
void push(struct stack * s, int value){ 
    if(isFull(s)){
        std::cout << "STACK OVERFLOW-->" << value << std::endl;
        return;
    }
    else{
        s->top++;     
        s->arr[s->top] = value;
    }
}

// Pop operation - Removes an element from the top of the stack
int pop(struct stack * s){ 
    if(isEmpty(s)){
        std::cout << "STACK UNDERFLOW-->"<< std::endl;
        return -1; // Return a sentinel value to indicate error
    }
    else{
        int value = s->arr[s->top];
        s->top--;
        return value;
    }
}

int main() {
    struct stack * s = new stack;
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size];
    //     isFull(s);
    // isEmpty(s);
    push(s, 50);  //--> i= 0
    push(s, 51);  //--> i= 1
    push(s, 52);  //--> i= 2
    push(s, 53);  //--> i= 3
    push(s, 54);  //--> i= 4
    push(s, 55);  //--> i= 5
    push(s, 56);  //--> i= 6
    push(s, 57);  //--> i= 7
    push(s, 58);  //--> i= 8
    push(s, 59);  //--> i= 9
    push(s,100);  //stack overflow

    std::cout << "Pushed 56 to the stack " << std::endl;
    std::cout << "popped value from stack " << pop(s) << std::endl; 
    
    return 0;
}
