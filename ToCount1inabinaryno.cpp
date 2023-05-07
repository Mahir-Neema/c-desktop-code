#include<iostream>
using namespace std;

int numberofones(int n){
    int count=0;
    while(n){
        n= n & (n-1);
        count++;
    }
    return count;
}

int main(){

    while(1){
    cout<<"enter the number\n";
    int m;
    cin>>m;
    cout<<numberofones(m)<<endl;
    }

    return 0;
}