#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    public:
    stack <int> st1;
    stack <int> st2;

    MyQueue() {  
    }
    bool empty() {
        return st1.empty() && st2.empty();
    }
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(empty()) return 0;
        else if(!st2.empty()){
                int ele = st2.top();
                st2.pop();
                return ele;
            }
            else{
                while(!st1.empty()){
                    st2.push(st1.top());
                    st1.pop();
                }
                int ele = st2.top();
                st2.pop();
                return ele;
        }
        
    }
    int peek() {
        if(empty()) return 0;
        else if(!st2.empty()) return st2.top();
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }  
};
int main(){
    MyQueue q;
    q.push(99);
    q.push(22);
    q.push(89);
    q.push(44);
    q.push(24);
    cout<<q.pop()<<endl;
    cout<<q.peek();
    return 0;
}