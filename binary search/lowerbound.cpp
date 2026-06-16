//The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> v,int key){
    int low = 0;
    int high = v.size()-1;
    int ans = v.size();
    
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]>=key){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){

    vector<int>v = {1,2,3,7,8,9};
    int k = lowerbound(v,7);
    cout<<"Lower Bound index  is: "<<k;

    }
