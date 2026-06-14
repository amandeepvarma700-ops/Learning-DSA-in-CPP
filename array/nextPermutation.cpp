#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
        int bp=-1;
       for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            bp=i;//breaking point
            break;
        }
       }

       if(bp==-1){
        reverse(nums.begin(),nums.end());
        return;
       }
       for(int i=n-1;i>bp;i--){
        if(nums[i]>nums[bp]){
            swap(nums[bp],nums[i]);
            break;
            }
       }
       reverse(nums.begin()+bp+1,nums.end());

    }
};

int main(){

    vector<int>v = {1,2,3,5,6,4};
    Solution s;
    s.nextPermutation(v);
    for(int x:v){
        cout<<x<<" ";
    }
}