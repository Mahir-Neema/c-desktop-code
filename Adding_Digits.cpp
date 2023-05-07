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
    string a;
    int b;
    int n;
    cin>>a>>b>>n;
    bool flag = true;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=9;j++){
            string k = a+to_string(j);
            if(stoi(k)%b == 0){
                a = k;
                flag = false;
                break;
            }
        }
        if(flag){cout<<"-1"<<endl; return;}
        else{
            for(int l=1;l<=n-i;l++) a=a+'0';
            break;
        }
    }
    cout<<a<<endl;
}

// void solve(){
//     int a,b,n;
//     cin>>a>>b>>n;
//     bool flag = true;

//     for(int i=0;i<n;i++){
//         a=a*10;
//         for(int j=0;j<=9;j++) if((a+j)%b == 0){a=a+j; flag=false; break;}
//         if(flag){cout<<"-1"<<endl; return;}
//     }
//     cout<<a<<endl;
// }

int main(){
    solve(); 
    return 0;
}