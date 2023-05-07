#include <bits/stdc++.h>
using namespace std;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));



int main(){
    int n;
    cin>>n;
    int k=0;
    while(k<n+1){
        if(k==0) cout<<"0"<<endl;
        for(int i=0;i<n-k;i++) cout<<" "<<" ";
        for(int j=0;j<=k;j++) cout<<j<<" ";
        for(int j=k-1;j>=0;j--) cout<<j<<" ";
        k++;
        cout<<endl;
    }
    k-=2;
    while(k>=0){
        for(int i=0;i<n-k;i++) cout<<" "<<" ";
        for(int j=0;j<=k;j++) cout<<j<<" ";
        for(int j=k-1;j>=0;j--) cout<<j<<" ";
        k--;
        cout<<endl;
    }

    return 0;
}