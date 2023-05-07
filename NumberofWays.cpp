#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 

int main(){
    int n,t; cin>>n>>t;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];

    int postfixsum = 0; 
    int count = 0;
    int ans=-1e9;
    int time = t;
    for(int j=n-1;j>=0;j--){
        for(int i=j;i>=0;i--){
            postfixsum+=a[i];
            if(t-postfixsum>=0){
                count++;
            }
        }
        ans=max(ans,count);
        t=time;
        postfixsum=0;
    }

    cout<<ans<<"\n";

    return 0;
}