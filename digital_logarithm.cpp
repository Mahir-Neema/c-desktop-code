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
    int n,ans=0; cin>>n;
    map<int,int>count1,count2;
    vi a(n),b(n);
    for(int i=0;i<n;i++) {cin>>a[i]; count1[a[i]]++;}
    for(int i=0;i<n;i++) {cin>>b[i]; count2[b[i]]++;}

    for(int i=0;i<n;i++){
        int num = a[i];
        int mini = min(count1[num],count2[num]);
        count1[num] = count1[num]-mini;
        count2[num] = count2[num]-mini;
    }


    for(int i=0;i<n;i++){
        int num = a[i];
        if(num>9 && count1[num]>0){
            int new_num = log10(num)+1;
            ans = ans + count1[num];
            count1[new_num] = count1[new_num]+count1[num];
            count1[num]=0;
            a[i]=new_num;
        }
        

        num = b[i];
        if(num>9 && count2[num]>0){
            int new_num = log10(num)+1;
            ans = ans + count2[num];
            count2[new_num] = count2[new_num]+count2[num];
            count2[num]=0;
            b[i]=new_num;
        }
        
    }

    for(int i=0;i<n;i++){
        int num = a[i];
        int mini = min(count1[num],count2[num]);
        count1[num] = count1[num]-mini;
        count2[num] = count2[num]-mini;
    }

    for(int i=0;i<n;i++){
        if(count1[a[i]]>0 && a[i]!=1) {ans+=count1[a[i]]; count1[a[i]]=0;}
        if(count2[b[i]]>0 && b[i]!=1) {ans+=count2[b[i]]; count2[b[i]]=0;}
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
       solve();   
    }
    return 0;
}