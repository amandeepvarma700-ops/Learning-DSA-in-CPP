#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long MOD = 1e9+7;

    long long PowerHelp(long long i,long long n){
    if(n==0) return 1;
    if(n==1) return i;
    if(n%2==0){
        return PowerHelp(i*i %MOD,n/2);
    }
    else return i*PowerHelp(i,n-1)%MOD;
    }

    int countGoodNumbers(long long n) {
        long long evenPosn = (n+1)/2;
        long long oddPosn = n/2;
        return (PowerHelp(5,evenPosn)*PowerHelp(4,oddPosn))%MOD;
    }
};

int main(){
    Solution s;
    int n = 50;
    
    cout<<s.countGoodNumbers(n);
}