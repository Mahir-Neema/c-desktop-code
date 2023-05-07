#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define ll long long 

    
inline int GetAns(int n,int t){
    return max((3*n)/10, (n-((n/250)*t)));
}  


int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p1 = GetAns(a,c);
    int p2 = GetAns(b,d);
    if(p1>p2) cout<<"Misha"<<endl; 
    else if(p1==p2) cout<<"Tie"<<endl;
    else cout<<"Vasya"<<endl;
    return 0;
}