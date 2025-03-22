#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="IceCream";
    int n=s.size();
    int start,end;
    start=0;
    end=n-1;
    while(start<=end){
        if(s[start]=='a' || s[start]=='i' || s[start]=='e'|| s[start]=='o' || s[start]=='u' || s[start]=='A' || s[start]=='E' || s[start]=='I' || s[start]=='O' || s[start]=='U'){
            if(s[end]=='a' || s[end]=='i' || s[end]=='e'|| s[end]=='o' || s[end]=='u' || s[end]=='A' || s[end]=='E' || s[end]=='I' || s[end]=='O' || s[end]=='U'){
                swap(s[start],s[end]);
                start++;
                end--;
           }
           else{
            end--;
           }
        }
        else{
            start++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}