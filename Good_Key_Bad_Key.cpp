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

int PaisaBachao(int index, vi &v,int size, int key){
    if(index == size) return 0;
    int diff1=0;
    int diff2=0;
    if(index== 0){
        diff1 =  (-1)*key;
        diff2 = 0;
    }
    else{
        diff1 = v[index] - key;
        diff2 = v[index]/2;
    }

    // diff1 = v[index] - key;
    // diff2 = v[index]/2;
    
    int ans = PaisaBachao(index+1,v,size,key);
    if((ans + diff1) > (ans + diff2)) return (ans + diff1);
    return (ans + diff2);
}

void solve(){
    int n,k;
	cin>>n>>k;
	vi v(n);
	for(int i=0;i<n;i++) cin>>v[i];

	cout<<PaisaBachao(0,v,n,k)<<endl;
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}