#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<vector<int>>mat(4,vector<int>(3,5));
    mat[2][2]=9;
    cout<<"No. of rows : "<<mat.size()<<endl;
    cout<<"No. of columns : "<<mat[0].size()<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
 }