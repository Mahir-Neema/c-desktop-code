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

    
void solve(){
    int x1,x2,x3,y1,y2,y3; 
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    int count = 0;
    if(x1==x2 || x2==x3 ||x1==x3) count++;
    if(y1==y2 || y2==y3 || y1==y3) count++;

    if(count>=2){cout<<"NO"<<endl; return;}
    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}