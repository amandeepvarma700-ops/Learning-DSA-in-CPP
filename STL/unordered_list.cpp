#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;

    //insert
    for(int i=1;i<11;i++){
        s.insert(i); //random insertion.
    }
    //idk the type of s.bigin and s.end
    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}