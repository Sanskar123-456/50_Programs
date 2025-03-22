// Largest sum of contiguous array of [O(n)] --------> Kadane's Algorithm
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[]={-1,-2,-3,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT32_MIN;
    int pre=0;
        for(int i=0;i<n;i++){
            pre=pre+arr[i];
            maxi=max(maxi,pre);
            if(pre<0){
                pre=0;
            }
        }
        cout<<maxi;
 }