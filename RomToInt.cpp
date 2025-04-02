#include<bits/stdc++.h>
using namespace std;
int num(char c){
    if(c=='I'){
        return 1;
    }
    else if(c=='V'){
        return 5;
    }
    else if(c=='X'){
        return 10;
    }
    else if(c=='L'){
        return 50;
    }
    else if(c=='C'){
        return 100;
    }
    else if(c=='D'){
        return 500;
    }
    else{
        return 1000;
    }
}
int ans(string bad){
    int sum=0;
    for(int i=0;i<bad.size()-1;i++){
        if(num(bad[i])<num(bad[i+1])){
            sum-=num(bad[i]);
        }
        else{
            sum+=num(bad[i]);
        }
    }
    sum+=num(bad[bad.size()-1]);
    return sum;
}

int main(){
    string str;
    cout<<"Enter the Roman Numerals : ";
    cin>>str;
    cout<<ans(str);
}