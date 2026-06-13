#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int minPrice = INT_MAX;
          int maxProfit = 0;
          for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice)minPrice = prices[i];
            int profit = prices[i] - minPrice;
            if(profit>maxProfit)maxProfit = profit;

          }
          return maxProfit;
    }
};

int main(){
    Solution s;
    vector<int> v = {9,1,2,6,3,7,};
    int k = s.maxProfit(v);
    cout<<k<<endl;
}