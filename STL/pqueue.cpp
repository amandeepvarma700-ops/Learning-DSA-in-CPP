//in pqueue, we either give priority to higher element or lower element.
//by default - higher element.

#include<bits/stdc++.h>
using namespace std;

int main() {

    
    priority_queue<int> pq;
    
    /*to give priority to min element we use the following code to create heap*/
    // priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(7);

    cout << "Top element: " << pq.top() << endl;

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}