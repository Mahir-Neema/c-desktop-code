#include<iostream>
using namespace std;
const long long M = 1e9+7;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long a,b,n;
        cin>>a>>b>>n;
        if(a==b || a%b==0) cout<<"-1"<<endl;
        else if(n%a==0 && n%b !=0) cout<<n<<endl;
        else{
            for(int i=0;i<M;i=i+a){
                if(i>n && i%a == 0 && i%b != 0 ){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}