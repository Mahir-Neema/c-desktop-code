#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>

    
void solve(){
    int n; cin>>n;
    // unordered_map<int,int> mp;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    int a[n];
    vi p(n,0),q(n,0); 
    for(int i=0;i<n;i++){
        cin>>a[i];
        // mp[a[i]]++;
        pq.push({a[i],i});
    }

    // if(mp[1]>1) {cout<<"NO"<<endl; return;}
    // for(auto it:mp) if(it.second>2) {cout<<"NO"<<endl; return;}

    vector<bool> vis1(n+1,false),vis2(n+1,false);
    while(!pq.empty()){
        int node = pq.top().first;
        int index = pq.top().second;
        pq.pop();

        if(!vis1[node]){
            p[index] = node;
            vis1[node] = true;
            int i=node-1;
            while(i>0){
                if(!vis2[i]){
                    q[index] = i;
                    vis2[i]=true;
                    break;
                }
                i--;
            }

            if(q[index]==0){
                if(!vis2[node]){
                    q[index]=node;
                    vis2[node]=true;
                }
                else {cout<<"NO"<<endl; return;}
            }
        }

        else{
            if(!vis2[node]){
                q[index] = node;
                vis2[node] = true;
                int i=node-1;

                while(i>0){
                    if(!vis1[i]){
                        p[index] = i;
                        vis1[i]=true;
                        break;
                    }
                    i--;
                }

                if(p[index]==0){
                    cout<<"NO"<<endl; 
                    return;
                }
            }

            else {cout<<"NO"<<endl; return;}
        }
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<p[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<q[i]<<" ";
    cout<<endl;
    
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}