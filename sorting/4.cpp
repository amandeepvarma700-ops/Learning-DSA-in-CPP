#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = 0;
    int temp[high-low+1];
     while (i <= mid && j <= high){
       if(arr[i]>=arr[j])temp[k++] = arr[j++];
       else if(arr[i]<arr[j])temp[k++] = arr[i++];
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
   for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }


void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid = (high+low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
} 

int main(){
    int arr[10] = {66,44,33,11,22,99,88,77,90,2};
    mergesort(arr,0,9);
    int n = 10;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}