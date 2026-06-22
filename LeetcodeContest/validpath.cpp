//.s are free areas and # are blocked, we have to find one path from top left to bottom right.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==n-1){
                    ans[i]+='.';
                }
                else ans[i]+= '#';
            }
        }
        return ans;
        
    }
};
int main(){
    int m=2,n=3;
    Solution s;
    vector<string> ans = s.createGrid(m,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
}