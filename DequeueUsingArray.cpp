#include<bits/stdc++.h>
using namespace std;
//Implementation using circular array---->

class Dequeue{
    int front, rear, size;
    int *arr;
    public:
    Dequeue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
   bool IsEmpty(){ return front == -1;}
   bool IsFull(){ return (rear+1)%size == front;}

   void push_front(int x){
    if(IsEmpty()) {
        front = rear = 0;
        arr[0] = x;
        cout<<"pushed"<<x<<"in front\n";
        return; 
   }
   else if(IsFull()){
    cout<<"dequeue overflow\n";
    return ;
   }
   else{
    front = (front-1+size)%size;
    arr[front] = x;
    cout<<"Pushed"<<x<<"in front\n";
    return;
   }
}

void push_back(int x){
    if(IsEmpty()){
        front = rear = 0;
        arr[0] = x;
        cout<<"Pushed"<<x<<"in back\n";
        return;
    }
    else if(IsFull()){
        cout<<"Dequeue is overflow\n";
    }
    else{
        rear = (rear+1)%size;
        arr[rear] = x;
        cout<<"pushed"<<x<<"in back\n";
        return;
    }
}

void pop_front(){
    if(IsEmpty()){
        cout<<"dequeue underflow";
        return;
    }
    else if(front == rear){
        cout<<"Popped"<<arr[front]<<"from front\n";
        rear = front =1;
    }
    else{
        front = (front+1)%size;
    }
}

void pop_back(){
    if(IsEmpty()){
        cout<<"Dequeue underflow\n";
        return;
    }
    else if(front == rear){
        cout<<"popped"<<arr[rear]<<"from back\n";
        front = rear = -1;
    }
    else{
        rear = (rear-1+size)%size;
    }
}

int start(){
    if(IsEmpty()) return -1;
    else return arr[front];
}

int end(){
    if(IsEmpty()) return -1;
    else return arr[rear];
}
};

int main(){
    Dequeue d(5);
    d.push_front(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(5);
    d.push_back(6);
    cout<<d.start()<<endl;
    cout<<d.end();
    return 0;
}