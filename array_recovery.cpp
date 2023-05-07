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
    int d[n]; for(int i=0;i<n;i++) cin>>d[i];
    int a[n]; a[0]=d[0];
    int sum = d[0];
    for(int i=1;i<n;i++){
        if(a[i-1]>=d[i] && d[i] != 0) {cout<<"-1"<<endl; return;}
        sum+=d[i];
        a[i] = sum;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}