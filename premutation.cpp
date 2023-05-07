#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()

    
    
void solve(){
    int n; cin>>n;
    int a[n][n-1],temp[n-1][n];

    for(int i=0;i<n;i++) for(int j=0;j<n-1;j++) cin>>a[i][j];

    int index = 0;
    int count1=0,count2=0,id1=0,id2=0,pid1=0,pid2=0;
    int ans[n]; bool flag = true;

    for(int j=0;j<n-1;j++){
        count1=0;count2=0;
        id1 = a[0][j];
        for(int i=0;i<n;i++){
            if(a[i][j]==id1) count1++;
            else{
                id2=a[i][j];
                count2++;
            }
        }

        if(abs(count1-count2)<=1 && flag){
            if(count1>count2){
                ans[index++]=id1;
                ans[index]=id2;
            }
            else if(count1<count2){
                ans[index++]=id2;
                ans[index]=id1;
            }
            else{
                if(id1==pid1 || id1==pid2){
                    ans[index++]=id1;
                    ans[index++]=id2;
                }
                else{
                    ans[index++]=id2;
                    ans[index++]=id1;
                }
            }
            flag = false;
        }
        else{
            if(count1>count2) ans[index++]=id1;
            else if (count1<count2) ans[index++]=id2;
        }
        pid1=id1;pid2=id2;
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<"\n";
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}