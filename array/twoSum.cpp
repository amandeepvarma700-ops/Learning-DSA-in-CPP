#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int index=0;
       
        for(int i=0;i<n;i++){
            int rem = target - nums[i];
            if(mp.find(rem)!=mp.end()){
                return {mp[rem], i};
            }
            mp[nums[i]]=index++;
        }
        return {};
    }

int main(){
    vector<int> v = {2,7,11,5};
    vector<int> k = twoSum(v,18);
    for(int i=0;i<2;i++){
        cout<<k[i]<<" "<<endl;
    }
    
    
}