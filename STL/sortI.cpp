//we can sort - arrays, vectors, in ascending, descending or even in a custom order.
//for vectors and others just use - v.begin() & v.end()
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3] = {6,5,4};
    sort(arr,arr+3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // to sort in descending order

    sort(arr,arr+3,greater<int>());
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}