//selection sort
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

    //selection sort
    for(int i=0;i<n-1;i++){
        int max = i;
        for(int j = i+1;j<n;j++){
            if(arr[max]<arr[j])max = j;
        }
        swap(&arr[i],&arr[max]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}