#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    


int main(){
    int t;cin>>t;
    int n; cin>>n;
    int a[101],b[101]; int maxa=-1e9,maxb=-1e9;
    for(int i=0;i<n;i++) {cin>>a[i]; maxa=max(maxa,a[i]);}
    for(int i=0;i<n;i++) {cin>>b[i]; maxb=max(maxb,b[i]);}

    for(int i=0;i<n;i++){
        if(a[i]<b[i]) swap(a[i],b[i]);
    }

    if(a[n-1]==maxa && b[n-1]==maxb) cout<<"Yes\n";
    else cout<<"no\n";
    
    return 0;
}