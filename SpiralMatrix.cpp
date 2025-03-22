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
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>mat[i][j];
        }
    }
    int top=0,right=n-1,bot=n-1,left=0;
    while(top<=bot && left<=right){
        for(int j=top;j<=right;j++){
            cout<<mat[top][j]<<" ";
        }
        cout<<endl;
        top++;
        for(int i=top;i<=bot;i++){
            cout<<mat[i][right]<<" ";
        }
        cout<<endl;
        right--;
        if(top<=bot){
            for(int j=right;j>=left;j--){
                cout<<mat[bot][j]<<" ";
            }
            cout<<endl;
            bot--;
        }
        if(left<=right){
            for(int i=bot;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            cout<<endl;
            left++;
        }
    }
 }
// By creating a new 1D array
//  vector<int> spiralOrder(vector<vector<int>>& matrix){
//         vector<int>ans;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int top=0,right=n-1,bot=m-1,left=0;
//         while(top<=bot && left<=right){
//            for(int j=top;j<=right;j++){
//                ans.push_back(matrix[top][j]);
//            }
//            top++;
//            for(int i=top;i<=bot;i++){
//                ans.push_back(matrix[i][right]);
//            }
//            right--;
//            if(top<=bot){
//                for(int j=right;j>=left;j--){
//                    ans.push_back(matrix[bot][j]);
//                }
//                bot--;
//            }
//            if(left<=right){
//                for(int i=bot;i>=top;i--){
//                    ans.push_back(matrix[i][left]);
//                }
//                left++;
//         }
//     } 
//     return ans;
//     }