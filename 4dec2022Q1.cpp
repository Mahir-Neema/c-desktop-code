#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<ll> b;
ll x=0;
void down(ll* a,ll n,ll i){
    ll minind=i;
    ll left=2*i+1;
    ll right=2*i+2;
    if(right<n && a[right]<a[minind]) minind=right;
    if(left<n && a[left]<a[minind]) minind=left;
    
    if(i!=minind){
        b.push_back(i);
        b.push_back(minind);
        swap(a[i],a[minind]);
        x++;
        down(a,n,minind);
    }
    
}
void build_heap(ll* a,ll n){
    for(ll i=n/2-1;i>=0;i--) down(a,n,i);
}

int main()
{
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    build_heap(a,n);
    cout<<x<<endl;
    for(i=0;i<b.size();i+=2) cout<<b[i]<<" "<<b[i+1]<<endl;
    return 0;
}

