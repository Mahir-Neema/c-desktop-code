#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


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
    int n;
    cin>>n;

    int maxiAns = int(sqrt(2*(n-1)));
    int maxi = maxiAns*maxiAns;
    unordered_map<int,bool>visited;

    stack<int> st;

    int diff = 0;
    int i=n-1;
    while(i>=0){
        diff = maxi-i;
        if(!visited[diff] && diff<=n-1){
            st.push(diff);
            visited[diff]=1;
            i--;
        }
        else if(visited[diff]==1 || diff>n-1){
            maxiAns--;
            maxi = maxiAns*maxiAns;
        }
    }


    while(!st.empty()){
        cout<<st.top()<<" "; 
        st.pop();
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}