#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define ll long long 

int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n = s1.length();

    if(s1==s2) cout<<"0"<<endl; 
    else if(s1<s2) cout<<"-1"<<endl;
    else cout<<"1"<<endl;

    return 0;
}