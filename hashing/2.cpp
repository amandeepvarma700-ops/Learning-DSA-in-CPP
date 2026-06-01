//count frequency in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

     unordered_map<int,int> mp;
    for (int i: v) {
        mp[v[i]]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second<<" times"<< endl;
    }

}