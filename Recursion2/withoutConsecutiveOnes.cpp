#include<bits/stdc++.h>
using namespace std;

void helper(string ans,int n,int &count){//i is the current posn of the pointer.
   
   if(ans.length()==n){
    count++;
    return;
   }

   //we will try 0 at current element
    helper(ans+'0',n,count);

   //try  1
   if(ans.empty()|| ans.back()!='1'){
    helper(ans+'1',n,count);
   }
}


class Solution {
public:
    int findIntegers(int n) {
        string ans = "";
        int count = 0;
        helper(ans,n,count);
        return count;

    }
};




int main(){
    Solution sol;
    int n = 4;
    cout<<sol.findIntegers(n);
    

}


/*"&ans means 'use the same existing string.' But ans + '0' creates a new temporary string instead of using the same one. So the function expects an existing object, but I'm passing a temporary object. That's why it doesn't work."

*/