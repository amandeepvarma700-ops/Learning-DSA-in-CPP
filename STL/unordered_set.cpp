#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;

    //insert
    for(int i=1;i<11;i++){
        s.insert(i); //random insertion.
    }
    //as we dk the type of s.bigin and s.end
    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    //find
    if(s.find(2)!=s.end())cout<<2<<" is here"<<endl;

    //erase. - erase element eithere in range or position specified. its not an index se we cannot delete 2nd element abrubptly. we have to use the advance keyword.

    s.erase(s.begin());
    cout<<"The size is: "<<s.size()<<endl;
    cout<<"To check empty we use .empty(): "<<s.empty()<<" (means its not empty)"<<endl;
    
    //to clear all elements
    s.clear();

    cout<<"The new size of the list is :"<<s.size();




}