// Stack smashing detected
#include<bits/stdc++.h>
#include<algorithm>
 using namespace std;
 int part(int arr[],int start,int end){
    int pos=start;
    for(int i=0;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
 }
 void quick(int arr[],int start,int end){
    if(start>=end)
    return ;
    int pivot=part(arr,start,end);
    // left sort
    quick(arr,start,pivot-1);
    //right sort
    quick(arr,pivot,end);   
 }
 int main(){
    int arr[]={6,1,2,5,4,3};
    quick(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
 }