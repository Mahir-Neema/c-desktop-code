#include <iostream>
#include<algorithm>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int gem[30001]={0}; // storing which island has how many gems
int dp[30001][500]={{-1}}; // island, previous jump length (the max she can jump will be 250 after that island count will be greater than 300001)
int d;

int solve(int a,int b){
    if(a>=30001)  return 0;
    
    if(dp[a][b-d+250] != -1) return dp[a][b-d+250];
    
    int ans;
    cout<<ans<<" ";
    if(b==1) ans = gem[a]+max(solve(a+b,b),solve(a+b+1,b+1)); 
    else ans = gem[a]+max({solve(a+b-1,b-1),solve(a+b,b),solve(a+b+1,b+1)});
    cout<<ans<<" ";


    return dp[a][b-d+250] = ans;
}
    
    
int main(){
    int n; cin>>n>>d;
    int m;
    for(int i=0;i<n;i++){
        cin>>m;
        gem[m]++;
    }    
    cout<<solve(d,d)<<endl;
    return 0;
}