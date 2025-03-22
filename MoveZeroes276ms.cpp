// Above commented code take T.C. 0ms
// int snowBallSize=0, n=nums.size();
//         for(int i=0; i<n; ++i){
//             if(nums[i]==0){
//                 snowBallSize++;
//             }else{
//                 swap(nums[i], nums[i-snowBallSize]);
//             }
//         }

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={0,1,0,3,12};
    int arr[]={0};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n<2){
        for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==0 && (arr[i]<arr[j] || arr[i]>arr[j])){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}