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
    string s;
    cin>>s;
    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i]=='h'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='e'){
                    for(int k=j+1;k<n;k++){
                        if(s[k]=='l'){
                            for(int l=k+1;l<n;l++) if(s[l]=='l') for(int m=l+1;m<n;m++) if(s[m]=='o') {cout<<"YES"<<endl; return;}        
                        }
                    }       
                }
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    t=1;
    while(t--){
       solve(); 
        
    }
    return 0;
}