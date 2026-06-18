#include<bits/stdc++.h>
using namespace std;
//[3,4,5,1,2] - no of rot --> 3
//if we find the index of the lowest element. then we can guess about the number of  rotations.
int noOfRotations(vector<int> v){
    int n = v.size();
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = (high+low)/2;
        if(v[mid]<v[high]){
            high = mid;
        }
        else if(v[mid]==v[high]){
            high--; 
        }
        else{
            low = mid+1;
        }
    }
    return low;
    
}

int main(){
    vector<int> v = {3,4,5,0,1,2};
    int ans = noOfRotations(v);
    cout<<ans;
}