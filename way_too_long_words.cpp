#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define ll long long 


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.length();
        if(n<=10) cout<<s<<endl;
        else{
            // string ans="";
            // int k = n-2;
            // ans = s[0];
            // ans = ans+to_string(k)+s[n-1];
            // cout<<ans<<endl;
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
    }
    return 0;
}