#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>

void solve(){
    int n; cin>>n;
    int a=1, b=n*n;
    bool flag = true;

    int ans[n][n];

    int size1=n,size2=n;
    
    int k=0,l=0,i=0;
    
    while (k < size1 && l < size2) {

        for (i = l; i < size2; ++i) {
            if(flag){
                    ans[k][i] =a;
                    a++;
                    flag=false;
                }
                else{
                    ans[k][i] =b;
                    b--;
                    flag = true;
            }
        }
        k++;
 

        for (i = k; i < size1; ++i) {
            if(flag){
                    ans[i][size2 - 1]=a;
                    a++;
                    flag=false;
                }
                else{
                    ans[i][size2 - 1]=b;
                    b--;
                    flag = true;
                }
        }
        size2--;
 
 
        if (k < size1) {
            for (i = size2 - 1; i >= l; --i) {
                if(flag){
                    ans[size1 - 1][i]=a;
                    a++;
                    flag=false;
                }
                else{
                    ans[size1 - 1][i]=b;
                    b--;
                    flag = true;
                }
            }
            size1--;
        }

        if (l < size2) {
            for (i = size1 - 1; i >= k; --i) {
                if(flag){
                    ans[i][l]=a;
                    a++;
                    flag=false;
                }
                else{
                    ans[i][l]=b;
                    b--;
                    flag = true;
                }
            }
            l++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}