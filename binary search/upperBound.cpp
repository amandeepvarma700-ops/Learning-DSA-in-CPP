//The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> v,int key){
    int low = 0;
    int n = v.size();
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]>key){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){

    vector<int>v = {1,2,3,7,8,9};
    int k = upperBound(v,7);
    cout<<"Upper Bound index  is: "<<k;
}