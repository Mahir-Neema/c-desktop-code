#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    int n,a,b; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b>a) {cout<<"Happy Alex"<<endl; return 0;}
    }
    cout<<"Poor Alex"<<endl;
}