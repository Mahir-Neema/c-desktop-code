#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()


    
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    char minval=s[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(minval>=s[i]){
            index=i;
            minval=s[i];
        }
    }
    string res="";
    res+=s;
    for(int i=0;i<n;i++){
        if(i!=index) res+=s[i];
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}
