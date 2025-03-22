#include<bits/stdc++.h>
using namespace std;

// 1st Approach Time Complexity = O(n^2)
// int main(){
//     int arr[]={3,1,2,2,3,1,1,3,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count;
//     for(int i=0;i<n;i++){
//         count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>(n/2)){
//             cout<<arr[i];
//             break;
//         }
//     }
// }


// 2nd approach (Sorting) Time Complexity = O(nlogn)

// 3rd Approach (Moore's Voting Algorithm) Time Complexity = O(n)