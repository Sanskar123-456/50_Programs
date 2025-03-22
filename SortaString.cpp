#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="acdebba";
    int n=s1.size();
    vector<int>s(26,0);
    int count,ind;
    count=1;
    for(int i=0;i<n;i++){
        s[s1[i]-'a']++;
    }
    string s2;
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(s[i]){
            s2+=c;
            s[i]--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s2[i];
    }
}