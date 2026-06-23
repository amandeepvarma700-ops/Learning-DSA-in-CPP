#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans = "";
        int n = s.length();
        int k = 0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')count++;
            else count--;
            
            if(count==0){
                ans += s.substr(k + 1, i - k - 1);
                k = i + 1;
            }
        }
        return ans;
    }
};

int main(){

    string str = "(()())(())";
    Solution s;
    cout<<s.removeOuterParentheses(str);
    
}