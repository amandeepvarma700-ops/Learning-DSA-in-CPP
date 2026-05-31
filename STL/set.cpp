//operations are exactly same as unordered set.
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(1);

    cout<<"Elements pressent in the set are: ";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    int n=2;
    if(s.find(2)!=s.end())cout<<n<<" is present: "<<endl;
    else cout<<"Not found "<<endl;

    s.erase(s.begin());
    cout<<s.empty()<<endl;
    s.clear();
    cout<<s.empty()<<endl;
}