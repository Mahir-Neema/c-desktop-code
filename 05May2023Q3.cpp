#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define ll long long 
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    
void solve(){
    int n; cin>>n;
    ll a[n]; for(int i=0;i<n;i++) cin>>a[i];

    ll ans=0,temp=0;
    for(int i=0;i<n;i++){
        temp=abs(a[n-i-1]-a[i]);
        if(temp==0) continue;
        if(i==0) ans=temp;
        else ans=__gcd(temp,ans);
    }

    cout<<ans<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}