#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long

int main(){
    string str; cin>>str;
    ll nb,ns,nc; cin>>nb>>ns>>nc;
    ll pb,ps,pc; cin>>pb>>ps>>pc;
    ll r; cin>>r;
    ll B=0,S=0,C=0;

    for(auto &i:str){
        if(i=='B') B++;
        else if(i=='S') S++;
        else if(i=='C') C++;   
    }

    ll s=0; ll e = max({nb,ns,nc})+r; ll x = 0,temp=0,ans=0;
    while(s<=e){
        x = s+(e-s)/2;
        temp = ((pb*max(0ll,(x*B-nb)))+(ps*max(0ll,(x*S-ns)))+(pc*max(0ll,(x*C-nc))));

        if(temp<=r){
            ans = x;
            s=x+1;
        }
        else e = x-1;

    }

    cout<<ans<<endl;

    return 0;
}
