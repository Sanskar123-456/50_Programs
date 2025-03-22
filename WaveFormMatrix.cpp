#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int m,n;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    vector<vector<int>>mat(m,vector<int>(n,0));
    cout<<"Enter the elements in matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int j=0;j<n;j++){
       if(j%2==0){
        for(int i=0;i<m;i++){
            cout<<mat[i][j]<<" ";
        }
       }
       else{
        for(int i=m-1;i>=0;i--){
            cout<<mat[i][j]<<" ";
        }
       }
       cout<<endl;
    }
 }