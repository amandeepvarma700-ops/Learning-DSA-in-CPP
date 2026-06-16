#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums,int target){
    //Note - nums must be sorted.
    int low = 0;
    int high = nums.size()-1;
    while(high>=low){
        int mid = (high+low)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main(){
    vector<int>v = {1,2,3,4,5,6,7};
    int k = binarySearch(v,5);
    cout<<"Index is: "<<k;
}