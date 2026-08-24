#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    q.push(7);
    q.push(10);
    q.push(13);
    q.push(8);
    q.push(5);
    q.push(4);

    // given--
    int k = 3;
    stack <int> st;
    while(k--){
     st.push(q.front());
     q.pop();
    }
    int n = q.size();
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(n--){
        q.push(q.front());
        q.pop();
    }
    //print--
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
return 0;
}