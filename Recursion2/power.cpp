#include<bits/stdc++.h>
using namespace std;

double power(double x,long long n){
    if(n==0) return 1;
    if(n==1) return x;
        
    if(n%2==0){
        return power(x*x,n/2);
    }
    else{
        return x*power(x,n-1);
    }
}
class Solution {
public:
    double myPow(double x, long long n) {
        int num = n;
        if(num<0) return 1/power(x,-1*n);
        return power(x,n);

    }
};

int main(){
    Solution s;
    double x = 50;
    long long n = 7;
    cout<<s.myPow(50,7);
    

}