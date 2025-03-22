// 2D Array Print Row-Index with max sum
#include<bits/stdc++.h>
 using namespace std;
 int max(int arr[][3],int r,int c){
    int maxi=INT32_MIN;
    int sum;
    int s;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=arr[i][j]+sum;
        }
        if(sum>maxi){
            maxi=sum;
            s=i;
        }
    }
    return s;
 }
 int main(){
    int M;
    int arr[3][3]={2,3,6,7,8,9,12,4,1};
    M=max(arr,3,3);
    cout<<"Row Index with max sum : "<<M;
 }