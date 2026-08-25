#include<bits/stdc++.h>
using namespace std;

/*int TimeRequired(vector<int> &arr, int k){
    queue<int> q;
    for(int i =0; i<arr.size(); i++)
        q.push(i);
    int time = 0;
    while((arr[k])!=0){
    arr[q.front()]--;
    if(q.front())
    q.push(q.front());
    q.pop();
    time++;
    }
    return time;
}
    */

    //Optimal one
    int requiredTime(vector<int>&tickets, int k){
        int time = tickets[k];
        for(int i =0; i<tickets.size(); i++){
            if(i<k){
                time+=min(tickets[i],tickets[k]);
            }
            else if(i>k){
                time+=min(tickets[i], tickets[k]-1);
            }
        }
        return time;
    }

    int main(){
        vector<int> arr = {1,6,2,3,7};
        cout<<requiredTime(arr,2);
        return 0;
    }



