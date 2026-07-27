#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

int main() {
    int arr[10] = {3,4,2,5,6,7,1,8,7,0};
    selectionsort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
