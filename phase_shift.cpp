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
    int n; cin>>n;
    string t; cin>>t;
    unordered_map<char,char> mp;
    vector<int> v(26,-1);
    int ch = 97;
    // string s = "";

    for(int i=0;i<n;i++){
        if(v[(int)t[i]-97] != -1) t[i] = (char) v[(int)t[i]-97];
        else{
            if(i==0 && (int) t[i]==97){
                ch++;
                v[(int)t[i]-97] = ch;
                t[0] = (char) ch;
                v[25] = 97;
                ch++;
            }
            // if((int) t[i]==ch){
            //     ch++;
            //     v[(int)t[i]-97] = ch;
            //     t[0] = (char) ch;
            //     ch++;
            // }
            else{
                v[(int)t[i]-97] = ch;
                t[i] = (char) v[(int)t[i]-97];
                ch++;
            }
        }
    }
    cout<<t<<endl;
}

int main(){
    // char ch='o';
    // cout<<(int) ch<<endl;
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}