#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int maxCount=0;
        //we will use two pointers. 
        int i=0;
        int j = 1;
        while(j!=n){
            if(nums[j]-nums[i]==1){
                count++;
                if(maxCount<count)maxCount = count;
                i = j+1;
                int temp = i;
                i = j;
                j = temp;
            }
            else if(nums[j]-nums[i]==0){
                j++;
            }
            else{
                count = 0;
                i = j+1;
                int temp = i;
                i = j;
                j = temp;
            }

        }
        return maxCount+1; 
    }
};

int main(){

    vector<int> v = {100,4,200,1,3,2};
    Solution s;
    int k = s.longestConsecutive(v);
    cout<<k;
}