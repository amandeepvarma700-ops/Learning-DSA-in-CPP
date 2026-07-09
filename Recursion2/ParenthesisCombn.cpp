#include<bits/stdc++.h>
using namespace std;

void backTracking(string curr,int open,int close,int n,vector<string>& result){
    //choose ( when open<n, choose ) when close<open
    if(curr.length()==2*n){
        result.push_back(curr);
        return;
    }
    if(open<n) backTracking(curr+"(",open+1,close,n,result);
    if(close<open) backTracking(curr+")",open,close+1,n,result);
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string>res;
       backTracking("",0,0,n,res);
       return res;
    }
};

int main(){
    Solution s;
    int n = 5;
    vector<string> t = s.generateParenthesis(5);

    for(int i=0;i<t.size();i++){
        cout<<t[i]<<" ";
    }
}
