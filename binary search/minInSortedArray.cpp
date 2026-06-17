#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else {
                high = mid;       //mid can be the lowest element
            }

        }
        return nums[low];
    }
};

int main(){
    vector<int> v = {4,5,6,7,0,1,2};
    Solution s;
    int k = s.findMin(v);
    cout<<k;
}