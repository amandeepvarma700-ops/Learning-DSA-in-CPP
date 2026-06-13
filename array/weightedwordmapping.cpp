
#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       int n = words.size();
       string ans="";
       for(int i=0;i<n;i++){
        int sum=0;
        int innerSize = words[i].size();
            for(int j=0;j<innerSize;j++){
                sum+=weights[(words[i][j]-'a')];
            }
            int k = sum%26;
            char ch = 'z'-k;
            ans.push_back(ch);
       } 
       return ans;
    }
};

int main(){
    vector<string>v = {"abcd","def","xyz"};
    vector<int>w = {5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};
    Solution s;
    string ans = s.mapWordWeights(v,w);
    cout<<ans;
    
}