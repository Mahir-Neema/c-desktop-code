#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    if((s[0] =='B'|| s[n-1]=='A') && s!="BA") cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}