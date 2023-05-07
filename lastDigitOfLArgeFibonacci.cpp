#include<bits/stdc++.h>
// using Dynamic Programming
using namespace std;

class HueHue{
    public:
    int fibo(int n){
        if(n==0) return 0;
        int f[n+2];
        int i;
        int sum=1;
        f[0]=0;
        f[1]=1;
        for(i=2;i<=n;i++){
            f[i] = (f[i - 1] + f[i - 2])%10;
            // sum = sum + f[i]*f[i];
        }
        return f[n];
    }

};


int main (){
    int n;
    cin>>n;
    HueHue obj;
    cout<<obj.fibo(n)<<endl;
    return 0;
}