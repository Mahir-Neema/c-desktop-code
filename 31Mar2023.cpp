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
    int n,c,d; cin>>n>>c>>d;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    vector<int> countTilln(n+1,-1);
    ll clt=0;
    for(int i=0;i<n;i++){
        if(a[i]<=n) countTilln[a[i]]++;
        else clt++;
    }

    ll removercount = 0;
    for(auto it:countTilln){
        if(it==1) removercount++;
    }

    removercount+=clt;

    ll addcount = 0;

    for(int i=1;i<=n;i++){
        if(countTilln[i]==-1) addcount++;
    }

    cout<<(c*removercount)+(d*addcount)<<"\n";

    
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}