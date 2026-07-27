#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int m = mid - left + 1;
    int n = right - mid;
    int L[m + 2];
    int R[n + 2];
    for (int i = 1; i <= m; i++)
        L[i] = arr[left + i - 1];
    for (int j = 1; j <= n; j++)
        R[j] = arr[mid + j];
    L[m + 1] = 1000000000;
    R[n + 1] = 1000000000;
    int i = 1, j = 1;
    for (int k = left; k <= right; k++) {
        if (L[i] <= R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[10] = {3,4,2,5,6,7,1,8,7,0};
    mergeSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}
