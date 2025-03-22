// Two Matrix Sum By using function
#include<bits/stdc++.h>
 using namespace std;
 void sum(int arr[][3],int arr1[][3],int r1,int c1){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            arr[i][j]=arr[i][j]+arr1[i][j];
            cout<<arr[i][j]<<" ";
        }
    }
 }
 int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int arr1[2][3]={5,6,7,8,9,10};
    sum(arr,arr1,2,3);
 }