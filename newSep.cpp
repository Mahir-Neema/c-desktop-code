#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
 
int main(){
	int n,k; cin>>n>>k;

	int a[1001], b[1001]; 
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int req[1001];
    for(int i=0;i<n;i++) req[i]=max(b[i]-a[i],0);
    int val = 0;
    
	return 0;
}