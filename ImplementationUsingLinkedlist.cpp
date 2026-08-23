#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int i){
        data = i;
        next = NULL;
    }
};
class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
    front = rear = NULL;
    }
    bool IsEmpty(){
        return front == NULL;
    }
    void push(int x){
        if(IsEmpty()){
            front = rear = new Node(x);
            return;
        }
        else{
            rear->next = new Node(x);
            rear = rear->next;
        }
    }
    int pop(){
        if(IsEmpty()){
        cout<<"Queue is underflow"<<endl;
        return -1;
        }
        else{
            cout<<"popped value"<<front->data<<endl;
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(99);
    q.push(70);
    q.push(77);
    q.pop();
    q.pop();
    cout<<q.start()<<endl;
    return 0;
}