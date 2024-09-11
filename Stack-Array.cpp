// Online C++ compiler to run C++ program online
#include <iostream>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}


int main() {
 
   //struct syntax
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = new int [s.size];
    
    //struct syntax as pointer
    struct stack * s = new stack; //allocate memory for the struct stack
    s->size = 80;
    s->top = -1;
    s->arr = new int [s->size];  //allocate memory for the array 
    
    //Check is stack is empty or not
    if(isEmpty(s)){
        std::cout << "The stack is empty having no elements";
    }
    else{
          std::cout << "The stack is not empty";
    }

    return 0;
}
