#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number:"<<endl;
    int n;
    cin>>n;
    int res=0;

    for(int i=5;i<=n;i*=5){
        res = res + (n/i);
    }

    cout<<res<<endl;
    cout<<"maze kar :)\n";

   
    return 0;
}