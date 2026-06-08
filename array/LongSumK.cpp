//here we have to find the longest sub array with the given sum K.
//brute force.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]  = {7,1,3,4,5,2,1,2,3,1};
    int n = 10;
    int k = 7;
    int countMax = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        int sum = 0;
        for(int j = i;j<n;j++){
            if(sum==k)break;
            sum+=arr[j];
            count++;
        }
        if(sum!=k)count = 0;
        if(count>countMax) countMax = count;
    }
    cout<<"highest sub array is: "<<countMax<<endl;
}