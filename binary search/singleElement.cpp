#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        
        int n = nums.size();
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        //every pair starts at even index and ends at odd index, it somewhere this pattern is disturbed this means there is our answer
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])return nums[mid];
            else if(nums[mid]==nums[mid^1]){//means everything is all right until this elemmt 
                low = mid+1;
            }
            else high = mid-1;
        }
        return -1;
        
    }
};

int main(){
    vector<int> v = {1,1,2,2,3,4,4,5};
    Solution s;
    int k = s.singleNonDuplicate(v);
    cout<<k;
}