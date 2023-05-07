#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define ll long long 

    
    
    
void solve(){
    ll n;
    cin>>n;
    int count = 0;
    while(n){
        if(n%10==4 || n%10==7) count++;
        n=n/10;
    }
    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve(); 
    return 0;
}