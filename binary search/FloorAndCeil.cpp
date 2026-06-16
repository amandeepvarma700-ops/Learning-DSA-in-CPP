//floor - value <=target
//ceil - value >= target

#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> v,int key){
    int low = 0;
    int n = v.size();
    int high = n-1;
    int ans= n-1;

    while(low<=high){
        int mid = (high+low)/2;
        if(v[mid]<=key){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return v[ans];
}

int ceil(vector<int> v,int key){
    int low = 0;
    int n = v.size();
    int ans = -1;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]>=key){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
     return (ans == -1) ? -1 : v[ans];
}

int main(){

     vector<int>v = {1,2,3,5,7,8};
    int k = floor(v,4);
    cout<<"Floor is : "<<k<<endl;

    int l = ceil(v,4);
    cout<<"Ceil is: "<<l;
}