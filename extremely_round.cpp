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
    if(n<10) {cout<<n<<endl; return;}
    if(n<100) {cout<<9+n/10<<endl; return;}
    if(n<1000) {cout<<18+n/100<<endl; return;}
    if(n<10000) {cout<<27+n/1000<<endl;return;}
    if(n<100000) {cout<<36+n/10000<<endl;return;}
    if(n<1000000) {cout<<45+n/100000<<endl;return;}
}

int main(){
    int t; cin>>t;
    while(t--){
       solve();  
    }
    return 0;
}