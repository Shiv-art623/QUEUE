#include<bits/stdc++.h>
using namespace std;

int displayNegative(queue<int> q){
    while(!q.empty()){
        if(q.front()<0){ 
            return q.front();
        }
        q.pop();
    }
    return 0;

}
vector<int> FirstNegative(int arr[], int k, int n){
    queue<int> q;
    for(int i =0; i<k-1; i++){
        q.push(arr[i]);
    }
    vector<int> ans;
    for(int i = k-1; i<n; i++){
        q.push(arr[i]);
        ans.push_back(displayNegative(q));
        q.pop();
    }
return ans;
    
}
int main(){
    int arr[] = {2,-3,-4,-2,7,8,9,-10};
    vector<int> ans = FirstNegative(arr,3,8);
   for(auto i : ans){
    cout<<i<<" ";
   }
   return 0;

}