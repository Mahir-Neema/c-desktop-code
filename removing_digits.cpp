#include<bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
int m=0,digit=0;



int helper(int n,int* dp){
	if(n<=0) return 0;
	
	if(dp[n] != -1) return dp[n];
	
	m = n;
	int ans = 1e9-10;
	while(m){
        while(m%10==0) m=m/10;
		digit = m%10; m=m/10;
		ans=min(ans,helper(n-digit,dp));
	}
	
	dp[n]=1+ans;
	return dp[n];
}


int main(){

	int n; cin>>n;
	int dp[n+1];
    for(int i=0;i<n+1;i++) dp[i]=-1;
	cout<<helper(n,dp)<<endl;

	return 0;
}
