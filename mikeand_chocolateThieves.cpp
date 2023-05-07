#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 

ll getcountx(ll n){
    ll ans=0;
    for(ll i=2;i*i*i<=n;i++) ans+=(n/(i*i*i));
    return ans;
}

int main(){
    
    ll m; cin>>m;
    ll s=0,e=1e18+1;
    ll mid=0,temp=0;
    
    
    while(s<e){
        mid=(s+e)/2;
        temp = getcountx(mid);
        // cout<<"s->"<<s<<" e->"<<e<<" mid->"<<mid<<" temp->"<<temp<<endl;
        if(temp<m)s=mid+1;
        else e=mid;   
    }

    if(getcountx(s)==m) {cout<<s<<endl; return 0;}
    cout<<"-1"<<endl;

    
    return 0;
}