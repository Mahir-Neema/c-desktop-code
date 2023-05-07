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
    
bool helper(string& s, int i, int j){
    if(i>=j) return 1;
    if(s[i]<s[j]) return 0;
    else if(s[j]<s[i]) return 1;
    return helper(s,i+1,j-1);
}    

void solve(){
    string s;
    cin>>s;
    string a = "";
    string b = "";
    bool flag = true; //alice
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(flag){
            if(s[i]<s[j]) a+=s[i++];
            else if((s[i]>s[j])) a+=s[j--];
            else{
                //equal
                // s[i]==s[j];
                if(helper(s,i+1,j-1)) a+=s[i++];
                else a+=s[j--];
            }
        }
        else{
            if(s[i]<s[j]) b+=s[i++];
            else if((s[i]>s[j])) b+=s[j--];
            else{
                //equal
                if(helper(s,i+1,j-1)) a+=s[i++];
                else a+=s[j];
            }
        }
        flag = !flag;
    }

    cout<<a<<" "<<b<<endl;
    if(a==b) cout<<"Draw"<<endl;
    else if(a<b) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}