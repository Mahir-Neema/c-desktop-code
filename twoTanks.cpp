#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>

int n,disp=0;

int finalvol(int a,int b,int c,int d,int*v){
   for(int i=0;i<n;i++){
      if(v[i]>=0){
         disp = min({c,v[i],(b-d)});
         c=c-disp;
         d=d+disp;
      }
      else{
         disp = min({d,-v[i],(a-c)});
         c=c+disp;
         d=d-disp;
      }
   }
   return c;
}

int dp[1000][1000][1000];



int finalRec(int a,int b, int c,int d,int*v,int index){
   if(index>n) return c;
   if(v[index]>=0){
      disp = min({c,v[index],(b-d)});
      if(dp[c][d][disp]!=-1) return dp[c][d][disp];
   }
   else{
      disp = min({d,-v[index],(a-c)});
      if(dp[c][d][disp]!=-1) return dp[c][d][disp];
   }

   if(v[index]>=0) return dp[c][d][disp] = finalRec(a,b,c-disp,d+disp,v,index+1);
   return dp[c][d][disp] = finalRec(a,b,c+disp,d-disp,v,index+1);
}


int main(){
   int a,b; cin>>n>>a>>b;
   int v[n]; for(int i=0;i<n;i++) cin>>v[i];
   int ans[a+1][b+1];
   for(int i=0;i<a+1;i++){
      for(int j=0;j<b+1;j++){
         // ans[i][j] = finalvol(a,b,i,j,v);
         ans[i][j] = finalRec(a,b,i,j,v,0);
      }
   }

   for(int i=0;i<a+1;i++){
      for(int j=0;j<b+1;j++) cout<<ans[i][j]<<" ";
      cout<<"\n";
   }
   return 0;
}