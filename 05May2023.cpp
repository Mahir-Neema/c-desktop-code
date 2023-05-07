#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front

bool isPalindrome(int a[],int n, int modnum){
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (a[i]%modnum != a[n-i-1]%modnum) return false;
    }
    return true;
}
    
void solve(){
    
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}