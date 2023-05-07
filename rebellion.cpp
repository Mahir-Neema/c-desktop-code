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

int main(){
    int t; cin>>t;
    while(t--){
        int n,count=0; cin>>n;
        int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        int s=0,e=n-1;
        while(s<e){
            if(a[e]==1) e--;
            if(a[s]==0) s++;
            if(a[e]==0 && a[s]==1 && s<e) {count++; s++; e--;}
        }
        cout<<count<<endl;    
    }
    return 0;
}