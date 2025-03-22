#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={4,3,2,1,2,7,6};
    int n=arr.size();
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==i){
    //             count++;
    //             if(count==2){
    //                 cout<<"Duplicate Element is : "<<i<<" ";
    //                 break;
    //             }
    //         }
    //     }
    // }
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    for(int i=0;i<n;i++){
        if(count[i]==0){
            cout<<"Missing element is : "<<i+1;
        }
        else if(count[i]>1){
            cout<<"Repeating element is : "<<i+1<<endl;
        }
    }
}