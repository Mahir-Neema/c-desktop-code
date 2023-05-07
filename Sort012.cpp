#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[200];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i] == 0){
            cout<<"0"<<" ";
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] == 1){
            cout<<"1"<<" ";
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] == 2){
            cout<<"2"<<" ";
        }
    }

    return 0;
}