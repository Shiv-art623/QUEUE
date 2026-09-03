#include<bits/stdc++.h>
using namespace std;

class MyStack{
    queue<int>q1;
    queue<int>q2;
    public:
    MyStack(){

    }
    bool empty(){
        return q1.empty() && q2.empty();
    }
    void push(int x){
         if(q1.empty()) q2.push(x);
        else q1.push(x);
    }
    int pop(){
        if(empty()) return 0;
        else if(q1.empty()){
            while(q2.size()>1){
             q1.push(q2.front());
             q2.pop();
            }
            int ele = q2.front();
            q2.pop();
            return ele;
        }
        else{
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int ele = q1.front();
            q1.pop();
            return ele;
        }
    }

    int top(){
        if(empty()) return 0;
        else if(q2.empty()) return q1.back();
        else return q2.back();
    }
};
int main(){
    MyStack st;
    st.push(88);
    st.push(66);
    st.push(33);
    st.push(65);
    st.push(55);
    cout<<st.top()<<" ";
    cout<<st.pop()<<" ";
    cout<<st.pop()<<" ";
    cout<<st.pop()<<" ";
    cout<<st.top()<<" ";
    return 0;
}