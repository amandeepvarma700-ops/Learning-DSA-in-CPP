#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    printAlpha(int n){
        for (int i = 1; i <= (2*n)-1; i++){//up to 7
            //stars
            int stars=i;
            if(stars>n) stars = n-(stars-n); //if stars == 5 
            for(int j=n;j>=stars;j--)cout<<"*";

            //spacing.

            for(int j=1;j<stars;j++)cout<<"  ";

            //stars
           
                int stars2=i;
                if(stars2>n) stars2 = n-(stars2-n);
                //printing stars.
                for(int j=n;j>=stars2;j--)cout<<"*";
                
                
                cout<<endl;
            }
        }
    };


int main()
{

    Solution s1;
    s1.printAlpha(4);
}