#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum,j;
    int arr[]={-1,0,1,2,-1,-4};
    // int arr[]={0,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j]+arr[j+1];
            if(sum==0){
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
            cout<<arr[j+1]<<" ";
            cout<<endl;
        }
        }
    }
}