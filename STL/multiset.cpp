//A multiset in STL is an associative container similar to a set, but it allows duplicate elements.
//everything is exactly the same it just allows duplicate elements.
//.erase(s.begin), .empty(), .size(), .clear() --> exactly same so i am not stating.

#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> s;

   
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(5);

    //traverse
    cout << "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int n = 3;
    if (s.find(2) != s.end())
        cout << n << " is present in multiset" << endl;



}