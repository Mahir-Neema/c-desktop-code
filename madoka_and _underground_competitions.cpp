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
    
void helper(vector<vector<char>>& ans, int n, int k, int r, int c, vector<vector<bool>>& vis){
    ans[r][c] = 'x';
    vis[r][c] = 1;

    int row[4] = {-k,0,k,0};
    int col[4] = {0,k,0,-k};
    for(int i=0;i<4;i++){
        int nrow = r + row[i];
        int ncol = c + col[i];
        if((nrow<n && nrow>=0) && (ncol<n && ncol>=0) &&  ans[nrow][ncol] == '.' && !vis[nrow][ncol]){
            helper(ans,n,k,r,c,vis);
        }
    }
    return;
}
    
    
void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<vector<char>> ans(n, vector<char> (n, '.'));
    vector<vector<bool>> vis(n, vector<bool> (n, 0));
    int m = n*n;
    helper(ans,n,k,r-1,c-1,vis);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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