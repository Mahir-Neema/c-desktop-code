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
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int ans = 6;
    n = 10-n;
    if(n==2) ans=ans*1;
    else if(n==3) ans=ans*3;
    else if(n==4) ans=ans*6;
    else if(n==5) ans=ans*10;
    else if(n==6) ans=ans*15;
    else if(n==7) ans=ans*21;
    else if(n==8) ans=ans*28;
    else if(n==9) ans=ans*36;
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}