#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="lEetcOde";
    int n=s.size();
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    string ans;
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            s[i]=ans[j];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}