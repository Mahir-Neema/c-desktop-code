#include <bits/stdc++.h>
using namespace std;

bool solve(){
  int n,sum=0;
  cin>>n;
  int x[n],y[n],z[n];
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i]>>z[i];
  }
  for(int i=0;i<n;i++){
    sum+=x[i];
  }
  if(sum!=0) return 0;

  for(int i=0;i<n;i++){
    sum+=x[i];
  }
  if(sum!=0) return 0;  
  for(int i=0;i<n;i++){
    sum+=x[i];
  }
  if(sum!=0) return 0;
  return 1;
}
int main() {
  if(solve()) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}