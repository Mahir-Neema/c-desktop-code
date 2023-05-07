#include<bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define ll long long 

int main(){
	int n;
    cin>>n;
    int a[n],b[n];
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++){
        b[a[i]] = i ;
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    cout<<"\n";

	return 0;
}