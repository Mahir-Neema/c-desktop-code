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
    int n,m; cin>>n>>m;
    int x[m],y[m]; for(int i=0;i<m;i++) cin>>x[i]>>y[i];
    if(m<n) {cout<<"YES"<<endl; return; }
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}