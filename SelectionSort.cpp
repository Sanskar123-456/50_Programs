#include<bits/stdc++.h>
 using namespace std;
 int Sel(int arr[],int n){
    int ind;
    for(int i=0;i<n-1;i++){
        ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[ind]){
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
 int main(){
    int arr[]={5,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sel(arr,n);
 }