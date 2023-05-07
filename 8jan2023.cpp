#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>


    
    
    
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    bool isbeautiful = true;
    vector<int> ans;
    for(int i=0;i<n;i++) cin>>a[i];
    int presum = 0;
    reverse(all(a));
    
    int i=0;
    while(i<n/2){
        ans.push_back(a[i]);
        ans.push_back(a[n-i-1]);
        i++;
    }

    if(n%2!=0) ans.push_back(a[n/2]);

    for(int i=0;i<n;i++){
        if(ans[i]==presum) {isbeautiful = false; break;}
        presum+=ans[i];
    }

    if(!isbeautiful) {cout<<"NO"<<endl; return;}
    
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}