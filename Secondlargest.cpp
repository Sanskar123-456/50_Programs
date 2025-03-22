#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,7,4,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
            if(count==n-1){
                return -1;
            }
        }
    }
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int max2=INT32_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]!=max && arr[j]>max2){
            max2=arr[j];
        }
    }
    cout<<max2;
}