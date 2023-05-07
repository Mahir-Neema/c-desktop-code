#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
    
    
    
void solve(){
    int n; cin>>n;
    ll maxi= 0-1e9;
    ll res=0;
    ll a[n]; for(int i=0;i<n;i++) {cin>>a[i]; res+=a[i];}
    ll b[n]; for(int i=0;i<n;i++) {cin>>b[i];res+=b[i]; maxi = max(b[i],maxi);}
    cout<<res-maxi<<endl;
    return;


    // vector<vector<ll>> vec(n,vector<ll>(3,0));

    // for(int i=0;i<n;i++) cin>>vec[i][1];
    // for(int i=0;i<n;i++) cin>>vec[i][0];
    // for(int i=0;i<n;i++) vec[i][2]=i;


    // sort(vec.begin(),vec.end());

    // ll ans = 0;
    // ll index = 0;
    // ll val = 0;

    // for(int i=0;i<n;i++){
    //     ans += vec[i][1];
    //     index = vec[i][2];
    //     val = vec[i][0];
    //     if(index-1>=0) vec[index-1][1] += val;
    //     if(index+1<n) vec[index+1][1] += val;
    // }
    // cout<<ans<<endl;




    // vector<pair<ll,ll>> v;
    // ll a[n],b[n]; for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n;i++) cin>>b[i];
    // for(int i=0;i<n;i++) v.push_back({b[i],a[i]});
    // sort(v.begin(),v.end());

    // ll res = v[0].second;

    // for(int i=0;i<n;i++){
    //     res = res + v[i].second + v[i-1].first;
    // }

    // cout<<res<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}