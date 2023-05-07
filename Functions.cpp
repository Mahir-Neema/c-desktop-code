#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans = ans*i;
        i++;
    }
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    int a,b,c;
    a = factorial (n);
    b = factorial (r);
    c = factorial (n-r);
    int result = a/(b*c);
    cout<<n<<"C"<<r<<"="<<result;
    return 0;
}