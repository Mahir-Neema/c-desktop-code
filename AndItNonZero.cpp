#include<iostream>
#include<math.h>
using namespace std;
int CountEven(int a[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int l,r;
    cin>>l>>r;
    int N = r-l+1;
    int a[200005];

    for(int i=0;i<N;i++){
        a[i]=i+l;
    }

    /*for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    */

    int INT_MAX;
    int ans = INT_MAX;

    for(int j=0;j<N;j++){
        ans = min(ans,CountEven(a,N));
        for(int k=0;k<N;k++){
            (a[k])>>1;
        }
    }

    cout<<ans<<" ";
    
    return 0;
}