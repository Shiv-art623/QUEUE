#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(55);
    q.push(99);
    q.push(8);
    q.push(22);
    q.push(34);


   //simple way to print elements
   /*while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
   return 0;*/





   //print without deleting the original value of queue---->
   //1. logic using extra space for storing the data---->(SC = O(N))
   /*vector<int> ans;
   while(!q.empty()){
    cout<<q.front()<<" ";
    ans.push_back(q.front());
    q.pop();
   }*/


   //2.logic--print the element and push it in the end--> without using extra space(SC = O(1))
   int n = q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
   return 0;
}