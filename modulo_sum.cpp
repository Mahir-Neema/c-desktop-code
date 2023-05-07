#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
int n=0,m=0;

bool isPossible(int* a,int sum,int index,vector<vector<int>>& dp){

    if(sum==0) return true;
    if(index<0) return false;


    if(dp[index][sum]!=-1) return dp[index][sum];


    bool include = isPossible(a,(sum+a[index])%m,index-1,dp);
    bool exclude = isPossible(a,sum,index-1,dp);


    return dp[index][sum]=(include || exclude);
}
    
    
int main(){
    cin>>n>>m;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]%m;
    }

    if(n>=m) {cout<<"YES"<<endl; return 0;}

    sort(a,a+n);

    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));

    bool b = isPossible(a,m,n-1,dp);

    if(b==true) {cout<<"YES"<<endl; return 0;}
    cout<<"NO"<<endl;


    return 0;
}