#include<bits/stdc++.h>
using namespace std;
void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void Print(vector<int> &arr, int k){
    queue<int> q;
    for(int i =0; i<k-1; i++){
        q.push(arr[i]);
    }
    for(int i = k-1; i<arr.size(); i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Print(arr,3);
    return 0;
}
