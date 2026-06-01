//bubbleSort
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[10];
    int n = 10;
    for(int i=0;i<n;i++){
        arr[i] = i; 
    }
    //now sorting
    for(int i=0;i<n-1;i++){//number of passes
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}