//armstrong number - number itself = sum of digits raised to the power of number of digits
#include<bits/stdc++.h>
using namespace std;

class ArmstrongChecker{
    public:
       static bool isArmstrong(int n){
            int copy = n;
            int length = to_string(n).length();
            int sum = 0;

            while(copy>0){
                int i = copy%10;
                sum+=round(pow(i,length));
                copy = copy/10;
            }
           
            return sum==n;
        }
};

int main(){
    
    int number = 153;
     if (ArmstrongChecker::isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
}