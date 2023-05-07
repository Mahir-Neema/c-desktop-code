#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    
    long long t=1;
    int n; cin>>n;
    for(int i=1;i<n;i++){
        t=2*t+1;
    }
    cout<<t<<" ";
    return 0;
}
