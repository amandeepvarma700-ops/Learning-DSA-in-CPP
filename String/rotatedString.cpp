#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int n = s.length();
        s = s+s;
        for(int i=0;i<s.length();i++){
            if(s.substr(i,n)==goal){
                return true;
            }
        }
        return false;


    }
};

int main(){
    string str = "tationro";
    Solution s;
    cout<<s.rotateString("rotation",str);
}