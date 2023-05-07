#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n]; bool flag = true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        for(int i=0;i<n;i++){
            if((a[i]<=a[n-1] && b[i]<=b[n-1])||(a[i]<=b[n-1] && b[i]<=a[n-1])) continue;
            else {cout<<"No\n"; flag=false; break;}
        }
        if(flag)cout<<"yes\n";
    }

    return 0;
}