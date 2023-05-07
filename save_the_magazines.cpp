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
    int n,ans=0,j=0,i=0; cin>>n;
    string s; cin>>s;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++){
        if(s[i]=='0'){
            j=i+1;
            while(j<n && s[j]=='1'){
                if(a[j]<a[i]){
                    s[i]='1';
                    s[j]='0';
                    break;
                }
                j++;
            }
            // i=j;
        }
    }

    for(i=0;i<n;i++) if(s[i]=='1') ans+=a[i];
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){solve();}
    return 0;
}