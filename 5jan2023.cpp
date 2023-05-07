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
    int n,k; cin>>n>>k;
    vi p(n,0); 
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    bool b = is_sorted(p.begin(),p.end());
    // if(b) {cout<<"0"<<endl; return;}

    int count=0,temp=1;
    
    for(auto &it:p){
        if(it==temp){
            temp++;
            count++;
        }
        cout<<it<<" ";
    }

    
    // int ans = n-count;
    // if(ans%k==0) cout<<ans/k<<endl; return;
    // cout<<ans/k+1<<endl;
  
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}