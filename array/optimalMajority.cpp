//majority -1 --> occurence>n/2 then only the element will stay at majority
//but instead if the qsns asks for maximum occurence then best solution will be using maps.
#include<bits/stdc++.h>
using namespace std;

int majority(vector<int> v){
    int n = v.size();
    int count = 0;
    int elt;

    for(int i=0;i<n;i++){
        if(count==0)elt = v[i];
        if(v[i]==elt)count++;
        else count--;

    }
    return elt;
}

int main(){
    vector<int> v = {1,2,1,4,3,1,1,1,2};
    int k = majority(v);
    cout<<k;
}