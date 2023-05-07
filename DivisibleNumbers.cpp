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
    int a,b,c,d; cin>>a>>b>>c>>d;
    int x=-1,y=-1; int m = a*b;
    for(int i=a+1;i<=c;i++){
        for(int j=b+1;j<=d;j++){
            if((i*j)%m==0){x=i;y=j;break;}
        }
        if(x!=-1) break;
    }

   
    cout<<x<<" "<<y<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
       solve();  
    }
    return 0;
}