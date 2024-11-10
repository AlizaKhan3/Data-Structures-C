#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Queue{
    Node* front;
    Node* back;
public:
    Queue(){
        front=back=NULL;
    }
    
    //ENQUE
    void enque(int val){
        Node* newNode=new Node();
        newNode->data=val;
        newNode->next=NULL;
        cout<<val<<" enqued\n";
        if(front==NULL){
            front=back=newNode;
            return;
        }
        back->next=newNode;
        back=newNode;
    }
    
    //DEQUE
    void deque(){
        if(front==NULL){
            cout<<"Queue is empty! Nothing to deque\n";
            return;
        }
        Node* temp=front;
        cout<<front->data<<" dequed\n";
        front=front->next;
        if(front==NULL){
            back=NULL;
        }
        delete temp;
    }
    
    //GETFRONT
    int getFront(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        return front->data;
    }
    
    //GETBACK
    int getBack(){
        if(back==NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        return back->data;
    }
    
    //IsEMPTY
    bool isEmpty(){
        return front==NULL;
    }
    
    //DISPLAY
    void display(){
        if(front==NULL){
            cout<<"Queue is Empty\n";
            return;
        }
        Node* newNode=new Node();
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(6);
    q.enque(8);
    q.enque(9);
    q.deque();
    q.deque();
    cout<<"front "<<q.getFront()<<endl;
    cout<<"back "<<q.getBack()<<endl;
    q.display();
    return 0;
}
