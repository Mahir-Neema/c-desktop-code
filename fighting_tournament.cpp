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
    

void correctVector(ll* arr,int n){
    ll temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return;
} 
    
    
void solve(){
    int n,q;
    cin>>n>>q;

    ll v[n];
    for(int i=0;i<n;i++) cin>>v[i];

    vi ans(q);
    while(q--){
        int j,k;
        cin>>j>>k;
        if(v[0]==n) {cout<<k<<endl; return;}
        ll temp = v[j];
        int count=0;
        while(k--){
            if(v[0]>v[1]){
                if(v[0]=temp) count++;
                correctVector(v+1,n-1);
            }
            else if(v[0]<v[1]){
                if(v[1]=temp) count++;
                correctVector(v,n);
            }
        }
        ans.push_back(count);
    }

    for(auto &it:ans)cout<<it<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}