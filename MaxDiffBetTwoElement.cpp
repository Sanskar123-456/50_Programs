// Maximum diff between two elements (Bruteforce T.C= O(n^2))
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9,5,8,12,2,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sub;
    sub=0;
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[j]>arr[i]){
                sub=arr[j]-arr[i];
                maxi=max(maxi,sub);
            }
        }
    }
    cout<<maxi;
}