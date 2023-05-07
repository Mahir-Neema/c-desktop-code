#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


#define ll long long 
#define all(v) v.begin(),v.end()


    
void helper(vector<vector<char>>& ans, int n, int k, int r, int c){
    ans[r][c] = 'x';
    // vis[r][c] = 1;

    int row[4] = {-k,0,k,0};
    int col[4] = {0,k,0,-k};
    for(int i=0;i<4;i++){
        int nrow = r + row[i];
        int ncol = c + col[i];
        // && !vis[nrow][ncol]
        if((nrow<n && nrow>=0) && (ncol<n && ncol>=0) &&  ans[nrow][ncol] == '.' ){
            helper(ans,n,k,nrow,ncol);
        }
    }
    return;
}
    
    
void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    // vector<vector<char>> ans(n, vector<char> (n, '.'));
    // // vector<vector<bool>> vis(n, vector<bool> (n, 0));
    // int m = n*n;
    // helper(ans,n,k,r-1,c-1);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}