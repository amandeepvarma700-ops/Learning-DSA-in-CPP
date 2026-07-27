#include<bits/stdc++.h>
using namespace std;

void insertElement(stack<int>&s,int temp){
    //base case 

    if(s.empty()){
        s.push(temp);
    }
    else{
        int front = s.top();
        s.pop();
        insertElement(s,temp);
        s.push(front);
    }
}

void reverseStack(stack<int>&s){
    if(s.empty()) return ;
    int front = s.top();
    s.pop();
    reverseStack(s);
    insertElement(s,front);
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(2);

    reverseStack(s);

    // Print the sorted stack
    cout << "reversed stack (descending order): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;

}