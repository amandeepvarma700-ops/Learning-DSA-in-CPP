#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void printAlpha(int n){
            for(int i=0;i<n;i++){
                char ch = 'A';
                //printing gaps
                for(int j=n-1;j>=i;j--){
                    cout<<" ";
                }
                //printing letters.
                int breakpoint = (2*i+1)/2;
                for(int j=1;j<=2*i+1;j++){
                    cout<<ch;
                    if(j>breakpoint)ch--;
                    else ch++;
                }

                cout<<endl;
            }
        }
};

int main(){
    Solution s1;
    s1.printAlpha(3);
}