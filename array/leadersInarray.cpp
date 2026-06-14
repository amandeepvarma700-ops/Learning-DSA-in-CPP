#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &v){
    int n = v.size();
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i]>maxi){
            maxi = v[i];
            ans.push_back(v[i]);
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> v = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leader(v);
    for(int i:ans){
        cout<<i<<" ";
    }
}