//This is just like rotated sorted array I Only we have to think about the case where they are equal
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target)return true;
            if(nums[mid]==nums[low]&&nums[mid]==nums[high]){//we know they are not the target so removing them is safe
                low++;
                high--;
                continue;
            }
            
            //when left part is sorted
            if(nums[mid]>=nums[low]){
                if(target<=nums[mid]&&target>=nums[low]){
                    high = mid-1;
                }
                else low = mid+1;
            }
            else {
                if(target>=nums[mid]&&target<=nums[high]){
                    low = mid+1;
                }
                else high = mid-1;
            }
        }
        return false;
    }
};

int main(){
    vector<int> v = {4,5,6,6,7,7,8,9,0,1,2};
    int k = 10;
    Solution s;
    bool ans = s.search(v,k);
    cout<<ans;
}