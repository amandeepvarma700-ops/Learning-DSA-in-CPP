//optimal soln
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0;//left pointer.
    int j = 0; //right pointer
    vector<int>arr  = {7,1,3,4,5,2,1,2,3,1};
    int n = 10;
    int k = 7;
    int countMax = 0;
    int sum = arr[0];
    while(j<n){
        while(i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        
        if(sum==k){
            countMax = max(countMax,j-i+1); 
        }
        j++;
        if(j<n)sum+=arr[j];
    }

    cout<<"highest length is: "<<countMax<<endl;
}