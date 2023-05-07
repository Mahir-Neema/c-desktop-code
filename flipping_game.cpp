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
    
int main(){
    int n; cin>>n;
    int a[n],one=0;  

    for(int i=0;i<n;i++){
        cin>>a[i]; 
        if(a[i]==1)one++;
    }
    if(one==n) {cout<<n-1<<endl; return 0;}
    if(one==n-1) {cout<<n<<endl; return 0;}

    cout<<"done"<<endl;


    return 0;
}