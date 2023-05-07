#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long     
void solve(){
    ll n; cin>>n;
    ll ans = sqrt(n);
    if(n==(ans*ans)) cout<<ans-1<<"\n";
    else cout<<ans<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--){solve();}
    return 0;
}