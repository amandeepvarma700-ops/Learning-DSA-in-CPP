#include<bits/stdc++.h>
using namespace std;

int helper(string &s,int i,long long num,int sign){
    //Here sine is storing the integer either +1 or -1. 
   if(i>=s.size()|| !isdigit(s[i])) return (int)(sign*num);

   //updating num
   num = num*10+(s[i]-'0');

   //overflow
   if(sign*num<=INT_MIN)return INT_MIN;
   if(sign*num>=INT_MAX) return INT_MAX;

   //recuse for next character - 
   return helper(s,i+1,num,sign);

}


class Solution {
public:
    int myAtoi(string s) {
       int i=0;
       while(i<s.size() && s[i]==' '){
        i++;
       } 
       //handle sign,
       int sign=1;
       if(i<s.size() && (s[i]=='+'||s[i]=='-')){
        sign = (s[i]=='-')?-1:1;
        i++;
       }

       return helper(s,i,0,sign);
    }
};

int main(){
    Solution s;
    string test = "42330ab";
    cout<<s.myAtoi(test);
    
}