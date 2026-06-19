#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
    
        int n = num.length();
        
        string max = "";
        int maxindex = -1;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==1){
               return num.substr(0, i + 1);
            }
        }
        
        return "";
        
    
    }
};

int main(){
    Solution s;
    string num = "5489758934";
    cout<<s.largestOddNumber(num);

}