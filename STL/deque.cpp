#include<bits/stdc++.h>
using namespace std;

void printdeque(deque<int> dq){
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dq; 
    dq.push_back(10);
    dq.push_front(91);
    dq.push_back(110);
    dq.push_front(911);
    dq.push_back(100);
    dq.push_front(19);

    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    //pop 
    dq.pop_front();
    dq.pop_back();
    cout<<"The elements in the deque are: ";
    printdeque(dq);

    
    

}