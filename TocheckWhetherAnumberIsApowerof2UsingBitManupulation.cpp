#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return (n && !(n & n-1));
}

int main(){

    while(1){
    cout<<"Enter the no."<<endl;
    int m;
    cin>>m;
    cout<<ispowerof2(m)<<endl;
    }

    return 0;
}