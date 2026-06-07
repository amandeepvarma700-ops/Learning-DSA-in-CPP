#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};

int main() {
    vector<int> arr = {4, 1, 2 ,3,3, 2, 1};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}

/*
look we have to change it to binary to exactly find the xor
a^a = 0.
a^0 = a;

ans = 0 ^ 4 = 4

ans = 4 ^ 1 = 5

ans = 5 ^ 2 = 7

ans = 7 ^ 3 = 4

ans = 4 ^ 3 = 7

ans = 7 ^ 2 = 5

ans = 5 ^ 1 = 4
*/