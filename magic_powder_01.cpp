#include<bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n),b(n),res(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];

	for(int i=0;i<n;i++) res[i] = b[i]/a[i];
	

	return 0;
}