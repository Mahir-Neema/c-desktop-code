#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
    sort(a,a+n);
    int req = 0;
    for(int i=n-1;i>=0;i--){
        req+=a[i];
        sum-=a[i];
        if(req>sum) {cout<<n-i<<endl; break;}
    }
  
    return 0;
}