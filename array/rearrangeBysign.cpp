#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>k(n);
        int pos = 0;
        int neg = 1;
        for(int i=0;i<n;i++){
            if(nums[i]>0&&pos<n-1){
                k[pos] = nums[i];
                pos = pos+2;
            }
            else if(nums[i]<0&&neg<n){
                k[neg] = nums[i];
                neg = neg+2;
            }
        }
       return k;

    }
};


int main(){
    Solution s;
    vector<int> v = {-1,2,1,3,-5,6,-7,-7};
    vector<int>k = s.rearrangeArray(v);
    for(int a:k){
        cout<<a<<" ";
    }
}