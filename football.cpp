#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++){
        if(count1>=7 || count2>=7) {cout<<"YES"<<endl; return;}

        if(s[i]=='1') {count1=0; count2++;}
        else if(s[i]=='0') {count2=0; count1++;}
    }
    if(count1>=7 || count2>=7) {cout<<"YES"<<endl; return;}
    cout<<"NO"<<endl;
} 


int main(){
    solve();
    return 0;
}