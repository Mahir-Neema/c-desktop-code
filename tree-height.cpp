#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl '\n'

typedef long long ll;
const ll maxn = (ll) 1e5+9;

vector<vector<int>> adj(maxn);

int dfs(int r){
    if(adj[r].size()==0) return 1;
    else{
        int maxv=0;
        for(int i=0;i<adj[r].size();i++){
            int j=adj[r][i];
            maxv=max(maxv, dfs(j));
        }
        return 1+maxv;
    }
}

int main()
{
	std::ios::sync_with_stdio(0);
	long long i,j,k,t,q,m,l,n;
  cin>>n;
  int p[n];
  int r;
  for(int i=0;i<n;i++){
      cin>>p[i];
      if(p[i]==-1) r=i;
      else adj[p[i]].push_back(i);
  }
  cout<<dfs(r)<<endl;
  return 0;
}