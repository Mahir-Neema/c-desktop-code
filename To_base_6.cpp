#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
using namespace std;
// using namespace boost::multiprecision;
const long long M = 1e9+7;


#define ll long long 
#define ulli unsigned long long int
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
    
    
ulli GetPow(int n){
    ulli power = 1;
    if(n==0) return power;
    for(int i=1;i<=n;i++) power = power*2;
    return power;
}   
    
void solve(){
    string s;
    cin>>s;
    int n = s.length();
    ulli ans = 0;
    // __int128 ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans = ans +  (ulli) pow(2,i);
        }
    }

    vector<int> res;

    ulli q = ans/6;
    int r = (int)ans%6;
    res.push_back(r);
    while(q){
        r=q%6;
        q=q/6;
        res.push_back(r);
    }
    reverse(res.begin(),res.end());
    
    for(auto &i:res) cout<<i;
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}