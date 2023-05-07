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

// unsigned int countSetBits(unsigned int n)
// {
//     unsigned int count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }
/*int Getpivot(int arr[], int n){
    int s=0; int e = n-1; int mid = s +(e-s)/2; // here pivot is refered to the smaller one
    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
        mid = s +(e-s)/2;
    }
    return s;
}


 binary_search(arr.begin(), arr.end(), 15) binary search STL;
 __gcd(x,y) inbuilt function

*/

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
    ll n,k;
    cin>>n>>k;
    // if(n==2 && k==0){cout<<"NO"<<endl; return;}
    // cout<<"YES"<<endl;
    // if(k%2==1){
    //     for(int i=1;i<=n;i=i+2) cout<<i<<" "<<i+1<<endl;
    // }
    // else{
    //     for(int i=3;i<=n;i=i+4){
    //         cout<<i<<" "<<i+1<<endl;
    //     }
    //     for(int i=1;i<=n;i=i+4){
    //         cout<<i+1<<" "<<i<<endl;
    //     }
    // }
    vi x,y,res;
    for(int i=1;i<n+1;i=i+2){x.pb(i+1); y.pb(i);}

    for(int i=0;i<n/2;i++){
        if(((x[i]+k)*y[i])%4==0){
            res.pb(x[i]);
            res.pb(y[i]);
        }
        else if(((y[i]+k)*x[i])%4==0){
            res.pb(y[i]);
            res.pb(x[i]);
        }
        else {cout<<"NO"<<endl; return;}
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i=i+2){
        cout<<res[i]<<" "<<res[i+1]<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}