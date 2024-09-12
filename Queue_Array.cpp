#include <iostream>

// int * arrQueue = new int[6];
# define sizeofArrQueue 4

int arrQueue[sizeofArrQueue];
int front = -1;
int rear = -1;

//inserting elements in Queue
void enqueue(int value){
    if(rear == sizeofArrQueue){
        std::cout<<"Queue Overflow! no space of " << value << std::endl;
    }
    else if(front == -1 && rear == -1){
    //     // std::cout<<"Queue is Empty!";
        front = rear = 0;
        arrQueue[rear] = value;
       std::cout<<"Queue Value is= "<< value <<std::endl;
    }
    else{
        rear++;
        arrQueue[rear] = value;
        std::cout<<"Queue Value is= "<< value <<std::endl;
    }
}

void dequeue(){
    if(rear == -1 && front ==-1){
         std::cout<<"Queue underflow! queue is empty!";
    }
    else if(front==rear){   //having one element in queue
        front = rear = -1;  //if we dequeue/delete that one element than it will point to -1 i.e empty queue
    }
    else{
        std::cout<<"The dequeued/deleted value is = " << arrQueue[front] <<std::endl;
        front++;
        // std::cout<<"The dequeued/deleted value is = " << arrQueue[front] <<std::endl;
    }
}

void Peek(){
    if(front == -1 && rear == -1){
        std::cout<<"queue is empty";
    }
    else{
        std::cout<<"The peek value of Queue is ---> " << arrQueue[front];
    }
}

int main(){
    enqueue(59090);  //deleted value or dequeued value
    enqueue(30);
    enqueue(550);
    enqueue(88);  
    enqueue(22222);
    enqueue(99); //overflow
    enqueue(100); //overflow
    
    dequeue();
    dequeue();
    dequeue();
    
    Peek();
    return 0;
}
