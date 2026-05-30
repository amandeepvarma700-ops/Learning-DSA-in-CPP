//to count number of digits
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    cout<<"Give me number: "<<endl;
    int n;
    cin>>n;
    int nofint = (int)(log10(n)+1);
    cout<<"Number of digits is: "<<nofint<<endl;
}