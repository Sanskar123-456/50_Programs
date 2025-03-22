 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int m,n;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    vector<vector<int>>mat(m,vector<int>(n,0));
    vector<vector<int>>mat1(m,vector<int>(n,0));
    cout<<"Enter the elements in matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                mat1[i][j]=mat[i][j];
            }
            else{
                mat1[i][j]=mat[j][i];
            }
        }
    }
    cout<<"Transpose of given matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
 }

// Without using new matrix
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
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    cout<<"Transpose of matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
 }