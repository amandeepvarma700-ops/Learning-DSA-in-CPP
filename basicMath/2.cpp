//greatest common divisor.e.g - GCD(9,12) = 3;

//slight better approach than brute force - start from min(m,n)

/*optimal approach for gcd;
Euclidian algorithm - concept - GCD remains same even if we subtract the smaller number from the larger one*/


#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n){
    int k = max(m,n) - min(m,n);
    for(int i=k;i>0;i--){
        if(m%i==0&&n%i==0)return i;
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<ans;
}

