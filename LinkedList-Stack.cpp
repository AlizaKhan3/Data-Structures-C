#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * top = 0;

//display LinkedList
void display(){
    struct node * head = top;
    if(top == 0){
        cout<<"Empty LinkedList!"<<endl;
    }
    else{
        while(head != NULL){
            cout<< head->data<< " ";
            head = head->next;
        }
    }
}

void push(int data){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next  = top;
    top = newNode;
}

void pop(){
    struct node * temp;
    temp = top;
    if(top == 0){
        cout<<"Empty LinkedList!"<<endl;
    }
    cout<<"Popped Element from Stack is: "<<top->data <<endl;
    top = top->next;
    free(temp);
}

void peek(){
    if(top == 0){
        cout<<"Empty LinkedList!"<<endl;
    }
    cout<<"Peeked Value from Stack is: "<<top->data <<endl;
}

int main() {
    cout<<"Stack Elements: "<<endl;
    push(7);
    push(88);
    push(9);
    push(12);
    push(2);
    display();
    cout<<endl;
    cout<<endl;
    pop();
    cout<<endl;
    peek();
    return 0;
}
