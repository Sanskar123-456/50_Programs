#include<bits/stdc++.h>
using namespace std;
string ans(int num){
    vector<int>val={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>str={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    string rom;
    for(int i=0;i<val.size() && num>0;i++){
        while(val[i]<=num){
            num-=val[i];
            rom+=str[i];
        }
    }
    return rom;
}
int main(){
    int number;
    cout<<"Enter The Number : ";
    cin>>number;
    cout<<ans(number);
}