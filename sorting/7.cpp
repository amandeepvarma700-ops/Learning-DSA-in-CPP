//quick sort
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    while(i<=j){
        while(i<=high&&arr[i]<=pivot)i++;
        while(j >= low&&arr[j]>pivot)j--;
        if(i<j)swap(&arr[i],&arr[j]);
    }
    swap(&arr[j],&arr[low]);
    return j;
}

void quickSort(int arr[],int low,int high){
    if(low>=high)return;
    int pi = partition(arr,low,high);
   quickSort(arr,low,pi-1);
   quickSort(arr,pi+1,high);
}

int main(){

    int arr[10] = {1,2,4,3,5,6,7,11,9,10};
    int n = 10;
    quickSort(arr,0,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}