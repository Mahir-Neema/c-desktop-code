#include<iostream>
using namespace std;

int main(){
    int N,K,P;
    cin>>N;
    cin>>K;
    cin>>P;

    int A[N],a[P],b[P];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    for(int i=0;i<P;i++){
        cin>>a[i]>>b[i];

        if (b[i]-a[i]<K){
            cout<<"Yes\n";
        }

        else{
            cout<<"No\n";
        }
    }
    
    return 0;
}