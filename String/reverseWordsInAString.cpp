//will be uploaded soon

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = n-1;
        while(i>=0){

            // skip spaces at the current position
            while(i>=0 && s[i] == ' ') i--;
            if(i<0)break;

            //end of the current word
            int end = i;
            //move left until space or start point is appeared
            while(i>=0 && s[i]!=' ') i--; 

            //extract the word (i + 1 as ith one is space)
            string word = s.substr(i+1,end-i);

            //create space to append that word
            if(!result.empty()){
                result+=" ";
            }
            //append that word
            result+=word;
        }
        return result;
    }
};

int main(){
    Solution s;
    string sent = "Apple is a good boy";
    cout<<s.reverseWords(sent);
    

}