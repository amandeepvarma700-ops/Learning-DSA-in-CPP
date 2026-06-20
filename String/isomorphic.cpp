#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n = s.length();
        unordered_map<char,char>mp;
        unordered_map<char,char>mp2;
        
        for(int i=0;i<n;i++){

            if(mp.count(s[i])){ //this helps to count
                if(mp[s[i]]!=t[i]) return false;
            }
                else mp[s[i]] = t[i];
            if(mp2.count(t[i])){
                if(mp2[t[i]]!=s[i]) return false;
            }
                else mp2[t[i]] = s[i];
        }
        return true;
        
    }
};

int main(){
    string s = "aman";
    string t = "nanm";
    Solution f;
    cout<<f.isIsomorphic(s,t);
    
}