 #include<bits/stdc++.h>
 using namespace std;
 int Insert(int arr[],int n){
   for(int i=0;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
    }
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
 int main(){
    int arr[]={5,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    Insert(arr,n);
 }