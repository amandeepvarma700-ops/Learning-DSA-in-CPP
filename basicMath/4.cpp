//divisors of n.
//property - if d is divisor of n then n/d is also a divisor of n.
// this property is valid about sqrt of n.
#include<bits/stdc++.h>
using namespace std;

void divisors(int n){
    set<int> s;
    int k = (int)sqrt(n);
    for(int i=1;i<=k;i++){
        if(n%i==0){
            s.insert(i);
            if(i!=n/i)s.insert(n/i);
        }
    }
    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    divisors(45);
}