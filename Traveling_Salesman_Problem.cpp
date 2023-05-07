#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


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
 
    

long long calculate(long long p,long long q)
    {
        long long mod = 998244353, ex;
        ex = mod - 2;

        while (ex) {
            if (ex & 1) p = (p * q) % mod;
            q = (q * q) % mod;
  
            ex >>= 1;
        }
        return p;
    }
    
    

    
void solve(){
    int n;
    cin>>n;
    int x[n];
    int y[n];

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(y[i]>=0) a = max(a,abs(y[i]));
        if(y[i]<0) b = max(b,abs(y[i]));
        if(x[i]>=0) c = max(c,abs(x[i]));
        if(x[i]<0) d = max(d,abs(x[i]));
    }

    cout<<2*(a+b+c+d)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}
