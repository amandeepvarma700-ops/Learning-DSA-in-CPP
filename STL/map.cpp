//size, clear, empty - same as rest.
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;

    for(int i=1;i<=5;i++){
        mp.insert({i,i*10});
    }
    

    cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n=2;
  //find here goes through keys.
  if(mp.find(2)!=mp.end())
    cout<<n<<" is present in map"<<endl;
}