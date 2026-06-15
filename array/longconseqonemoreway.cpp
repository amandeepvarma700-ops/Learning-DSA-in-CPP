//here we will use the set data structure
#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &v){
    unordered_set<int> s;
    int n = v.size();
    if (n == 0) return 0; 
    int longest = 1;

    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }
    for(auto it:s){
        if(s.fine(it-1)==s.end()){//it checks whether the first element is actually the first in sequecne or not
            cnt = 1;
            int x = it;

            //now we will look for consequtive sequence
            while(s.find(x+1)!=s.end()){
                x = x+1;
                cnt++;
            }
        }
        longest = max(longest,cnt);
    }
    return longest;
}