#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    
void solve(){
    string x,y,z;
    unordered_map<char,int> mp;
    cin>>x>>y>>z;
    if((x.length()+y.length()) != z.length()) {cout<<"NO"<<endl; return;}
    for(auto &i:x) mp[i]++;
    for(auto &i:y) mp[i]++;
    for(auto &i:z) mp[i]--;
    for(auto &i:z) if(mp[i] != 0) {cout<<"NO"<<endl; return;}
    cout<<"YES"<<endl;
}

int main(){
    solve(); 
  
    return 0;
}