#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int maxi = 200010;



// var
vector<bool> black(maxi,false);
int n; 
int ansm = 1e7;

void dfs(int node,int count, int parent,vector<int> adjL[]){
    for(auto &j:adjL[node]){
        if(black[j]){
            ansm=min(ansm,count+1);
        }
        if(j!=parent){
            dfs(j,count+1,node,adjL);
        }
    }
}

void solve(){
    cin>>n;
    int c[n];
    black.resize(n,false);
    int ans[n-1];
    vector<int> adjL[n];
    
    cin>>c[0];
    c[0]=c[0]-1;
    black[c[0]]=true;
    for(int i=1;i<n;i++){
        cin>>c[i];
        c[i]=c[i]-1;
    }
    
    int a=0,b=0;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        a=a-1;
        b=b-1;
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }

    
    for(int i=1;i<n;i++){
        black[c[i]]=true;
        for(int j=0;j<n;j++){
            if(black[c[j]]){
                dfs(c[j],0,-1,adjL);
                ans[i-1]=ansm;
            }
        }
        ansm=1e7;
    }
    
    for(int i=0;i<n-1;i++) cout<<ans[i]<<" ";
    cout<<"\n";
    
}

int main(){
    int t=1; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}