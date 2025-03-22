#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>str={'a','b','a','b','c'};
    // vector<char>ans;
    int n=str.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=i;k<j;k++){
                cout<<str[k];
            }
            cout<<endl;
        }
    }
}