//Binary Search in 2D Matrix of T.C -> (n+logn)
//Apply Binary Search in a particular row
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int X,start,end,mid,count;
    count=0;
    // vector<vector<int>>mat(3,vector<int>(3,0));
    int mat[3][3]={1,3,5,6,7,8,22,24,35};
    // cout<<"Enter the elements in 2D Matrix : ";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>mat[i][j];
    //     }
    // }
    cout<<"Enter the element to be searched : ";
    cin>>X;
    for(int i=0;i<3;i++){
        if(mat[i][0]<=X && X<=mat[i][2]){
            start=0;
            end=2;
            while(start<=end)
            {
                mid=start+((end-start)/2);
                if(mat[i][mid]==X){
                    count++;
                    break;
                }
                else if(mat[i][mid]<X){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                // mid=start+((end-start)/2);
            }
        }
    }
    if(count==1){
        cout<<"Element is present in matrix.";
    }
    else{
        cout<<"Element not present.";
    }
 }