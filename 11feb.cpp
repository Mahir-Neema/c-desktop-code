#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int space = 1e6+1;
#define ll long long
 
 
bool isPrime(ll n){
	if(n==2) return true;
	if(n<2 || n%2==0) return false;
	for(int i=3;i*i<=n;i=i+2){
		if(n%i==0) return false;
	}
	return true;
}
 
int main(){
    ll n; cin>>n;
    ll x;
    ll a;
    for(ll i=0;i<n;i++){
    	cin>>a;
        x=sqrt(a);
        if(x*x==a && isPrime(x)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}