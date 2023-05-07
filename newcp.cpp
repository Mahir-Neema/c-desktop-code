#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n= 0;
int solve(vector<int> &A) {
    n = A.size();
    sort(A.begin(),A.end());
    int ans = 0;
    
    int larger = -1;
    int countsame=1;
    
    for(int i=n-1;i>0;i--){
        if(A[i]!=A[i-1]){
            ans+=(i*countsame);
        }
        else countsame++;
    }
    
    return ans;
}
int main(){
    int N; cin>>N;
    vector<int> A(N); for(int i=0;i<N;i++) cin>>A[i];
    cout<<solve(A)<<endl;
    return 0;
}