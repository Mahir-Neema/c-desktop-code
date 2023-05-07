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
    
    
void solve(){
    int n,k;
    cin>>n>>k;
    if(k==0) for(int i=1;i<=n;i++) cout<<i<<" ";
    else{
        for(int i=n;i>n-k;i--) cout<<i<<" ";
        for(int i=1;i<=n-k;i++) cout<<i<<" ";
    }
}

int main(){
    solve(); 
 
    return 0;
}