#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high)
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }

        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        
    }


int main(){

    vector<int>v = {1,2,2,1,0,0,2,1};
    sortColors(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}