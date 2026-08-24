#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(99);
    q.push(77);
    q.push(66);
    q.push(55);
    q.push(44);

    //reverse using stack--->
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    //print---
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
return 0;
}