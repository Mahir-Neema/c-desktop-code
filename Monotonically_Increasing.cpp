#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


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


    
    
void GetAns(int n,int m, vvi &ans,vi &v, int index,int j){
    if(index>=n) ans.push_back(v); return;

    for(int i=j;i<=m;i++){
        v[index] = i;
        GetAns(n,m,ans,v,index+1,i+1);
    }
    return;
}
    
void solve(){
    int n,m;
    cin>>n>>m;
    vvi ans;
    vi v(n);

    GetAns(n,m,ans,v,0,1);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<n;j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// for(int i=0;i<n;i++) cout<<x[i]<<y[i]; // debugging

    // int prevx = 0;
    // int prevy = 0;

    // int ans = 0;

    // for(int i=0;i<n;i++){
    //     ans += (abs(x[i]-prevx)+abs(y[i]-prevy));
    //     prevx = x[i];
    //     prevy = y[i];
    // }

    // ans += (abs(x[n-1]-0)+abs(y[n-1]-0));