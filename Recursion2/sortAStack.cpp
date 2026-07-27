#include<bits/stdc++.h>
using namespace std;

void insertElement(stack<int>&s,int temp){
    if(s.empty() || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    //then again we will temp
    insertElement(s,temp);

    //at last we will push val
    s.push(val);

}

void sortStack(stack<int>& s){
    if(!s.empty()) {
        int  temp = s.top();
        s.pop();
        //this one is responsible for sorting the remaining stack. It removes all the elements and then we pass it in the  sorted array.
        sortStack(s);
        insertElement(s,temp);
    }
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(2);

    sortStack(s);

    // Print the sorted stack
    cout << "Sorted stack (descending order): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;

}