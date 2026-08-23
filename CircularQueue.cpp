#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int front, rear;
    int size;
    Queue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
    bool IsEmpty(){
        return front == -1;
    }
    bool IsFull(){
        return (rear+1)%size  == front;
    }
    void push(int x){
        if(IsEmpty()){
            front = rear = 0;
            arr[0] = x;
            cout<<"pushed"<<x<<endl;
        }
        else if(IsFull()){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        else{
        rear =(rear+1)%size;
        arr[rear] = x;
        cout<<"pushed"<<x<<endl;
        }
    }
    void pop(){
        if(IsEmpty()){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        else{
        if(front == rear){
            cout<<"Popped"<<arr[front]<<endl;
           front = rear = -1;
        }
        else{
            cout<<"Popped"<<arr[front]<<endl;
            front = (front+1)%size;
        }
        } 
    }
    int start(){
        if(IsEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
        } 
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.push(99);
    q.push(33);
    q.pop();
    q.pop();
    q.pop();
    q.push(88);
    cout<<q.start()<<endl;
    return 0;
}
