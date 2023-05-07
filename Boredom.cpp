#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
const int shortM = 1e5+8;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
vb del(shortM,false);

int x = 0;
int helper(int index, int a[]){
    if(index<0) return 0;
    int ans1=0,ans2=0;
    x=a[index];
    if(!del[x]){
        cout<<"index->"<<index<<" a[index]->"<<a[index]<<endl;
        del[x-1]=true;
        del[x+1]=true;
        ans1 = x + helper(index-1,a);
        del[x-1]=false; 
        del[x+1]=false;
    }
    else ans1 = helper(index-1,a);

    ans2 = helper(index-1,a);

    return max(ans1,ans2);
}

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];

    cout<<helper(n-1,a)<<"\n";
    return 0;
}

