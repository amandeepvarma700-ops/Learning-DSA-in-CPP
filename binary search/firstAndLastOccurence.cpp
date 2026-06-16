//given an integer array find first and last occurence.
#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int lowerAns = -1;
    int upperAns = -1;
    
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            lowerAns = mid;
            high = mid-1;
        }
        else if(nums[mid]>target)high = mid-1;
        else low = mid+1;
    }
    low = 0;
    high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            upperAns = mid;
            low = mid+1;
        }
        else if(nums[mid]>target)high = mid-1;
        else low = mid+1;
    }
    return {lowerAns,upperAns};

    }

int main(){

    vector<int> v = {1,2,2,3,3,4,7};
    vector<int> ans = searchRange(v,3);
    cout<<"["<<ans[0]<<", "<<ans[1]<<"]"<<endl;
}