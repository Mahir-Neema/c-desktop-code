#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long arr[n];
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        cout<<min(even,odd)<<"\n";
    }
    return 0;
}