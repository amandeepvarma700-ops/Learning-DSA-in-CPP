#include<bits/stdc++.h>
using namespace std;


    void secLargest(int arr[],int n){
        int largest = arr[0];
        int sec_large = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                sec_large = largest;
                largest = arr[i];
            }
        }
        cout<<"Second largest number is: "<<sec_large<<endl;
    }


int main(){
    int arr[8] = {4,5,11,25,1,0,45,7};
    int n = 8;
    secLargest(arr,n);
}