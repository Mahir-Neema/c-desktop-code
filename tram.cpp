#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    
void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int maxi = INT_MIN;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        ans = ans + b[i]-a[i];
        maxi = max(maxi,ans);
    }
    cout<<maxi<<endl;
}

int main(){
    solve(); 
    return 0;
}