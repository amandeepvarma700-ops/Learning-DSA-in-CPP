//size is exactly same.

#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1){
    queue<int>q2 = q1;
    while(!q2.empty()){
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}

int main(){
    queue<int> q;
    for(int i=1;i<=5;i++){
        q.push(i);//push at back.
    }
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    cout<<"Pop the fornt element: "<<endl;
    q.pop();
    printqueue(q);
}