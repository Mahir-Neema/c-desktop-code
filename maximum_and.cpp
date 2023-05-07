#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n], c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ///// <---
        sort(b,b+n);
        //// --->

        for(int i=0;i<n;i++) c[i]=a[i]^b[i];
        int ans = c[0];
        for(int i=1;i<n;i++){
            ans = ans&c[i];
        }
        cout<<ans<<endl<<endl<<endl<<endl;
    }
    return 0;
}