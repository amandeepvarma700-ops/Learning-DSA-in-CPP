#include<bits/stdc++.h>
using namespace std;

int MaxSubSum(vector<int> &nums){
    
    int sum = 0;
        int n = nums.size();
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0)sum=0;
            sum+=nums[i];
            if(sum>maxSum)maxSum = sum;
        }
        return maxSum;
    
}

int main(){

    vector<int>v = {2, 3, 5, -2, 7, -4};
    int k = MaxSubSum(v);
    cout<<k;
}