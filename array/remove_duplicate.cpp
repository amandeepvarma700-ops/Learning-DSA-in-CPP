#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,1,1,2,3,4,5,6,6,7};
    int i = 0;
    int n = 10;
    int count=0;
    for(int j=1;j<n;j++){
        if(arr[j]==arr[i])continue;
        else if(arr[j]>arr[i]){
            arr[++i] = arr[j];
            count++;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
}