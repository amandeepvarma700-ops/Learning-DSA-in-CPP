//here we will use two arrays to store the indices where its zero, then we will loop and make it zero. It has the best time complexity but space complexity still not optimum
#include<bits/stdc++.h>
using namespace std;

void setToZero(vector<vector<int>> &matrix){
     int m = matrix.size();
       int n = matrix[0].size();
       vector<int>row(m,0);
       vector<int>col(n,0);
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
               row[i] = 1;
               col[j] = 1;
            }
        }
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1||col[j]==1){
                matrix[i][j] = 0;
            }
        }
       }
    
}

int main(){
    vector<vector<int>> v = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setToZero(v);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}