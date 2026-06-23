#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int min=INT_MAX;
        // to get the minimum length;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<min)min = strs[i].length();
        }

        int i=0;
        while(i<min){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i])return ans;
            }
            ans+=strs[0][i];
            i++;
        }
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<string> v = {"flower","flight","fatigue"};
    cout<<s.longestCommonPrefix(v);

}