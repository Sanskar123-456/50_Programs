//  Reversing each row of 2-D Matrix
 #include<bits/stdc++.h>
 using namespace std;
 void revrow(int arr[][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=c-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
 }
 int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    revrow(arr,3,3);
 }