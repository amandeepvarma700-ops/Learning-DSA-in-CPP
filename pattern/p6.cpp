//idea - squares ke basis mein printing karna hai.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    
    void printPattern(int n){
        int t = 2*n-1;
        for(int i=1;i<=t;i++){
            for(int j=1;j<=t;j++){
                int top = i;
                int left = j;
                int right = t-j+1;
                int bottom = t-i+1;

                //jitna distance hoga, utna - i hamein print karna hai. Distance should be minimum.
                int layer = min(min(top,bottom),min(right,left));
                cout<<n-layer+1;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s1;
    s1.printPattern(4);
}