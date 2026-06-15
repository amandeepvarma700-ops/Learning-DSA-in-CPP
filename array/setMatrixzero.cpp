#include<bits/stdc++.h>
using namespace std;

void setToZero(vector<vector<int>> &matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                for(int col = 0;col<n;col++){
                    if(matrix[i][col]!=0){
                        matrix[i][col] = -1;
                    }
                    
                }
                for(int row=0;row<m;row++){
                    if(matrix[row][j]!=0){
                        matrix[row][j] = -1;
                    }
                }
            }
        }
    }
    //now replace them back
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
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