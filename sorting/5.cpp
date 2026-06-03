//recursive bubble sort 
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recurBubble(int arr[],int n){
    int count= 0;
    if(n==1)return;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
             swap(&arr[i],&arr[i+1]);
             count++;
            //  cout<<count; - for testing.
        }
    }
    if(count==0)return;
    recurBubble(arr,n-1);
    
}

int main(){

    int arr[10] = {1,2,4,3,5,6,7,4,9,10};
    int n = 10;
    recurBubble(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}