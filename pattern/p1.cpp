#include <iostream>
using namespace std;

class Solution{
    public:
        void print_right(int n){
            for(int i=1;i<=2*n-1;i++){
                int j = i;
                if(i>n) j = n-(i-n);
                for(int k=0;k<j;k++)cout<<"*";
                cout<<endl;
            }
        }

};

int main(){
Solution obj;
obj.print_right(5);
    
}