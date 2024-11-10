#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * s){
    if(s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * s){
 if(s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *s, int value){ 
    if(isFull(s)){
        cout << "STACK OVERFLOW-->" << value <<endl;
    }
    else{
        s->top++;     
        s->arr[s->top] = value;
        cout<<value <<" ";
    }
}

void pop(struct stack *s){ 
    if(isEmpty(s)){
        cout << "STACK UNDERFLOW-->"<< endl;
    }
    else{
        cout<< s->arr[s->top];
        s->top--;
    }
}

void peek(struct stack *s){
    if(isEmpty(s)){
        cout << "STACK UNDERFLOW-->"<< endl;
    }
    cout<<"Peeked Value is: "<< s->arr[s->top];
}

int main() {
    struct stack * s = new stack;
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size];

    cout << "Pushed Values in stack ";
    push(s, 50);  //--> i= 0
    push(s, 51);  //--> i= 1
    push(s, 52);  //--> i= 2
    push(s, 53);  //--> i= 3
    push(s, 54);  //--> i= 4
    cout<<endl;
    
    cout << "popped value from stack: ";
    pop(s);      // Pop Value = 54
    
    cout<<endl;
    peek(s);     // Peek Value = 53
    return 0;
}
