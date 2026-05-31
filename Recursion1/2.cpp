#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v, int left, int right) {
    
    if (left >= right) return;

    
    swap(v[left], v[right]);

    // recursive call
    reverseArray(v, left + 1, right - 1);
}

int main() {
    vector<int> v;
    v = {1,2,3,4,5};
    int n = v.size();
    reverseArray(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}