#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={7, 10, 4, 3, 20, 15};
    int n=arr.size();
    int a=INT32_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<a){
            a=arr[i];
        }
    }
}