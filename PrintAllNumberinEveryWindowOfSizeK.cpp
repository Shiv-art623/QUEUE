#include<bits/stdc++.h>
using namespace std;
void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void Print(int arr[], int k,int n){
    queue<int> q;
    for(int i =0; i<k-1; i++){
        q.push(arr[i]);
    }
    for(int i = k-1; i<n; i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    Print(arr,3,8);
    return 0;
}
