#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 


int main(){
    int n, m, mini = INT_MAX; cin>>n>>m;
    int a[m]; for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);

    for(int i=0;i<m-n+1;i++) mini = min(mini,a[i+n-1]-a[i]);
    cout<<mini<<endl;

    return 0;
}