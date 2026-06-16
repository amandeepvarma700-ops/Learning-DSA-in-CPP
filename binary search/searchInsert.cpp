//given an array return index if found, if not return where it would be.
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }

int main(){

    vector<int>v = {1,2,3,7,8,9};
    int k = searchInsert(v,4);
    cout<<"element is / should be at index : "<<k;
}