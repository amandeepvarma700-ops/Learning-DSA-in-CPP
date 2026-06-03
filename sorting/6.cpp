//insertion sort using recursion.
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reccurInsertion(int arr[],int n,int i){
    if(i==n)return;
    int j = i;
    while(j>0&& arr[j-1]>arr[j]){
        swap(&arr[j],&arr[j-1]);
        j--;
    }
    reccurInsertion(arr,n,i+1);
}

int main(){

    int arr[10] = {5,6,190,65,35,12,11,49,55,5};
    int n = 10;
    reccurInsertion(arr,10,1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
