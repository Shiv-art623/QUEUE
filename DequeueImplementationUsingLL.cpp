#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};
class Dequeue{
    Node* front, *rear;
    public:
    Dequeue(){
        front = rear = NULL;    
    }

    //push front()----
    void push_front(int x){
        if(front == NULL){front = rear = new Node(x);}
        else{
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }

    }
    //push back()----------->
    void push_back(int x){
        if(front == NULL){ front = rear = new Node(x);}
        else{
            Node* temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    void pop_front(){
        if(front == NULL) return;
        else{
            Node *temp = front;
            front = front->next;
            delete temp;
            if(front) front->prev = NULL;
            else rear = NULL;
            return ;
        }
    }

    void pop_back(){
        if(front == NULL) return;
        else{
            Node *temp = rear;
            rear = rear->prev;
            delete temp;
            if(rear) rear->next = NULL;
            else front = NULL;
            return;
        }
    }

    int start(){
        if(front == NULL) return -1;
        else{
        return front->data;
        }
    }

    int end(){
        if(front == NULL) return -1;
        else return rear->data;
    }
};
int main(){
    Dequeue q;
    q.push_back(1);
    q.push_back(3);
    q.push_back(4);
    q.push_front(5);
    cout<<q.start()<<endl;
    cout<<q.end();
    return 0;
}
