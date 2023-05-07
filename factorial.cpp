#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){

    unsigned int long long n;
    cin>>n;
    unsigned int long long ans=1;
    for(int i=1;i<=n;i++) {ans*=i;}
    cout<<ans<<endl;
    return 0;
}