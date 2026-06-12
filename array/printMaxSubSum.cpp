#include<bits/stdc++.h>
using namespace std;


void printMaxSubSum(vector<int>v){
    int sum=0;
    int maxSum=INT_MIN;
    int tempLeft = 0;
    int left = -1;
    int right = -1;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(sum<0)sum = 0;
        if(sum==0){
            tempLeft = i;
        };
        sum+=v[i];
        if(sum>maxSum){
            left = tempLeft;
            maxSum = sum;
            right = i;
        }
    }
    for(int k=left;k<=right;k++){
        cout<<v[k]<<" ";
    }
}

int main(){

    vector<int>v = {-2, -3, -7, -2, -10, -4 };
    printMaxSubSum(v);
}