#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>

    
    
    
    
void solve(){
    int n,k; cin>>n>>k;
    int p[n]; for(int i=0;i<n;i++) cin>>p[i];

    bool flag = is_sorted(p,p+n);
    if(flag) {cout<<"0"<<endl; return;}

    int count = 0; int temp = 1;

    for(int i=0;i<n;i++){
        cout<<i<<" ";
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