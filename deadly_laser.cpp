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

void solve(){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    int d1 = (x-1)+(y-1);
    int d2 = abs(n-x)+abs(m-y);

    //||(y-1<=d && x-1<=d)
    // if((n-x<=d && m-y<=d)||(y-1<=d && x-1<=d)){
    //     // cout<<"n-x<=d"<<" "<<n-x<<"<="<<d<<"  "<<"y-1<=d"<<" "<<y-1<<"<="<<d<<" "<<endl;
    //     cout<<"-1"<<endl; 
    //     return;
    // }
    // if((n-x<=d && m-y<=d)||(y-1<d && x-1<d)){
    //     cout<<"-1"<<endl; 
    // }
    if((y+d>=m && y-d<=1) || (x+d>=n && x-d<=1) || (x+d>=n && y+d>=m) || (x-d<=1 && y-d<=1)){
        cout<<"-1"<<endl;
        return;
    }
    else{
        cout<<abs(n-1)+abs(m-1)<<endl;
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