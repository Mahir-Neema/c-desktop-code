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

    

int main(){
    int n; cin>>n;
    string s; cin>>s;

    int count0=0,count1=0;

    for(int i=0;i<n;i++){
        if(s[i]=='0') count0++;
        else count1++;
    }
 
    int m = (int)pow(2,n);

    int vis[m] = {0};

    int pow0 = (int) pow(2,count0) - 1;
    int pow1 = (int) pow(2,count1) - 1;

    // cout<<"pow0= "<<pow0<<" Pow1= "<<pow1<<endl;

    for(int i=0;i<pow1;i++) vis[i]=1;
    for(int i=0;i<pow0;i++) vis[m-1-i]=1;

    for(int i=0;i<m;i++){
        if(vis[i]==0) cout<<i+1<<" ";
        // cout<<i<<"->"<<vis[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}