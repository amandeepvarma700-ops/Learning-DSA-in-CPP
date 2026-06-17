#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[low]<=nums[mid]){   
                if(nums[low]<=target && nums[mid]>=target)high = mid-1;
                else low = mid+1; //right part
            }
            else{
                if(nums[mid]<=target&&nums[high]>=target) low = mid+1;
                else high = mid-1;
            }
            
        }
        return -1;

    }
};

int main(){

    vector<int> v = {4,5,6,7,0,1,2};
    int k = 0;
    Solution s;
    int ans = s.search(v,k);
    cout<<ans;

}