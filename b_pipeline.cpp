#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const long long M = 1e9+7;
#define ll long long 

inline ll sum(ll n){
    return (n*(n+1))/2;
}

int main(){
    ll n,k;
    cin>>n>>k;
    n--;
    ll total = sum(k-1);
    if(total<n) cout<<"-1"<<endl;
    else{
        ll s=0,e=k-1;
        while(s<=e){
            ll mid=s+(e-s)/2;
            if(total-sum(mid)>=n) s=mid+1;
            else e=mid-1;
        }
        cout<<k-1-e; // k-1-(h+1)+1
    }
    return 0;
}