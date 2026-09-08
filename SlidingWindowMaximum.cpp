#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> ans;
        for(int i =0; i<k-1; i++){
            if(d.empty()) d.push_back(i);
            else{
                while(!d.empty() && nums[i]>nums[d.back()]){
                    d.pop_back();
                }
                d.push_back(i);
            }
        }
        for(int i = k-1; i<nums.size(); i++){
            while(!d.empty() && nums[i]>nums[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
                if(d.front() <= i-k)
                d.pop_front();
                ans.push_back(nums[d.front()]);
            }
        
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> arr = {4,3,7,5,2,3,1,2,8,7};
    vector<int> ans = s.maxSlidingWindow(arr,4);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}
//TC = O(n)
