//clear, empty, size, v.begin(), v.end() and erase same as unordered list.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;

    //to insert we use push_back
    for (int i = 0; i < 10; i++) {
    v.push_back(i); 
  }
    
    //front 
    cout<<"Front element: "<<v.front()<<endl;
    cout<<"Last element: "<< v.back()<<endl;
    v.pop_back(); //to delete last element

    //insert
    v.insert(v.begin(),5);
    cout<<"Now the first element is : "<<v[0]<<endl;
} 