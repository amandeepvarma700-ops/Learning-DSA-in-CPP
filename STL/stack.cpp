//jo bhi mein array mein banata thha. wo pehele se iss stack mein available hai.
#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int>);
int main(){
    stack<int> s;
    for(int i=1;i<=5;i++)s.push(i);
    printstack(s);
    cout<<endl;

    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();  //Pop the elements

}

void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())  //Iterate while the stack isn't empty
    {
        cout<<s2.top()<<" ";
        s2.pop();  //Keep popping the elements
    }
}