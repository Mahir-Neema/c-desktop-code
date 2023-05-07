#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void solve(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    int coin = s[0];
    int req = 0;
    for(int i=1;i<n;i++){
        req+=s[i-1]-s[i];
        if(req<0){
            coin+=abs(req);
            req=0;
        }
    } 
    cout<<coin<<endl;
   
}

int main(){
    solve(); 
    return 0;
}