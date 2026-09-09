#include<bits/stdc++.h>
using namespace std;

//Brute Force-- O(n*k)

int minkbitFlips(vector<int>&nums, int k){
    int flip = 0;
    for(int i =0; i<nums.size(); i++){
        if(nums[i] == 0){
            if(i+k > nums.size()) return -1;
            for(int j =i; j<i+k; j++){
                nums[j]= !nums[j];
            }
              flip++;
        }
    }
    return flip;
}
//Optimal  O(n)
  int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int flips = 0;
        for(int i =0; i<nums.size(); i++){
            if(!q.empty() && q.front()<i) q.pop();
            if(q.size()%2 == nums[i]){
                if(i+k-1>= nums.size()) return -1;

                q.push(i+k-1);
                flips++;
            }
        }
        return flips;
    }
    int main(){
        vector<int> arr = {0,0,1,0,0,1,1,0,1,0};
        cout<<minkbitFlips(arr,4);
        //minKBitFlips(arr,4);
        return 0;
    }