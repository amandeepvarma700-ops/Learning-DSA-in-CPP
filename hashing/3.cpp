//print the highest and the lowest frequency.

#include<bits/stdc++.h>
using namespace std;

void High_occur(vector<int> v){
   unordered_map<int,int> mp;
    for (int i: v) {
        mp[i]++;
    }//everything is stored successfully at maps.
    int max=0;
    int maxEle=0;
    for(auto it = mp.begin();it !=mp.end();it++){
        if(max<it->second){
            max = it->second;
            maxEle = it->first;
        }
    }
    cout<<"Element with highest occurance: "<<maxEle<<endl;
}

int main(){
    vector<int> v(11);
    for(int i=0;i<11;i++){
        cin>>v[i];
    }
    High_occur(v);
}