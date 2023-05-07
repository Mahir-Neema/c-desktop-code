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
    int n,H,M;
    cin>>n>>H>>M;
    int k = (H*60)+M;
    int a[n];
    int b[n];
    int mi[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        mi[i]=(a[i]*60)+b[i];
    }
    int ans=0;
    bool flag = true;
    sort(mi,mi+n);
    for(int i=0;i<n;i++){
        if(mi[i]>=k){
            ans = mi[i]-k;
            flag = false;
            break;
        }
    }
    if(flag){
        int z = 1440-k+mi[0];
        cout<<z/60<<" "<<z%60<<endl;
        return;
    }

    cout<<ans/60<<" "<<ans%60<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}