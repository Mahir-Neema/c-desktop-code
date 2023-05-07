#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
    
void solve(int n, int k){
    if(k==0){
        for(int i=0;i<n;i++) cout<<"-1 ";
    }
    else if(k<n){
        for(int i=0;i<k-1;i++) cout<<"-1 ";
        cout<<"200 "<<"-400 ";
        for(int i=k+1;i<n;i++) cout<<"-1 ";
    }
    else{
        solve(n-1,k-n);
        cout<<"1000 ";
    }
 
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        solve(n,k); 
        cout<<"\n";
    }
    return 0;
}