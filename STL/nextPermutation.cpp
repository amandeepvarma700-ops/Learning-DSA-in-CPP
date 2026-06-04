//it is used to give the next lexicographically greater permutation of a given array or vector.
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,1,2};
    next_permutation(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
}