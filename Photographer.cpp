#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
const int b = 1000000000;


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

// unsigned int countSetBits(unsigned int n)
// {
//     unsigned int count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }
/*int Getpivot(int arr[], int n){
    int s=0; int e = n-1; int mid = s +(e-s)/2; // here pivot is refered to the smaller one
    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
        mid = s +(e-s)/2;
    }
    return s;
}


 binary_search(arr.begin(), arr.end(), 15) binary search STL;
 __gcd(x,y) inbuilt function

*/

// reverse(str.begin(),str.end())
void solve(){
    int n,x;
	cin>>n>>x;
    int m = 2*n;
	int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    bool b = false;
    for(int i=0;i<n;i++){
        if(a[i+n]-a[i] < x){
            b = true;
            break;
        }
    }
    if(b) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
	
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}