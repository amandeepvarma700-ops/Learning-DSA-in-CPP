//count sum==k
#include<bits/stdc++.h>
using namespace std;

int countArray(vector<int> v,int k){
  int n = v.size();
  unordered_map<int,int> mp;
  int count = 0;
  int sum = 0;
  
  
  for(int i=0;i<n;i++){
    sum+=v[i];
    int rem = sum-k;
    if(mp.find(rem)!=mp.end()){
      count+=mp[rem];
    }
    mp[sum]++;
  }
  return count;
}

int main(){
  vector<int> v = {1,-1,1,-1,1};
  cout<<countArray(v,0);
}