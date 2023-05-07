#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vb vector<bool>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front

// bool isSorted(int* v,int n){
//    for(int i=0;i<n-1;i++){
//       if(v[i+1]<v[i])return 0;
//    }
//    return 1;
// }

// void solve(){
//    int n;
//    cin>>n;
//    int v[n];
//    for(int i=0;i<n;i++) cin>>v[i];
      
//    if(isSorted(v,n)) {cout<<"0"<<endl; return;}

//    int ans = 0;
//    for(int i=0;i<n;i++){
//       int k = v[i];
//       if(k!=0){
//          ans++;
//          for(int j=0;j<n;j++){
//             if(v[j]==k)v[j]=0;
//          }
//       }
//       if(isSorted(v,n)) {cout<<ans<<endl; return;}
//    }
   
//    cout<<ans<<endl; 
// }

void solve(){
   int n;
   cin>>n;
   int v[n];
   int count = 0;
   vi idx(n+2,0);
   vb dlt(n+2,0);
   for(int i=0;i<n;i++) {cin>>v[i]; idx[v[i]]=i;}

   int i = 0;
   for(i = n-1;i>0;i--){
      if(v[i]<v[i-1]) break;
   }
   i--;

   
   for(int k=0;k<=i;k++){
      if(dlt[v[k]]==false){
         dlt[v[k]]=true;
         i = max(i,idx[v[k]]);
         count++;
      }
   }
   cout<<count<<endl;      
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}
