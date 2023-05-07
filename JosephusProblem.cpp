#include<iostream>
using namespace std;

int jos(int n,int k){
    if(n==1){
        return 0;
    }

    return (jos(n-1,k)+k)%n;
}

int main(){
    while(1){
    cout<<"Loading...............\n";
    cout<<" 100% \n";
    cout<<"Wait a few seconds..........\n";
    cout<<"Enter The Number of Players\n";
    int n,k;
    cin>>n;
    cout<<"Enter killer position difference\n";
    cin>>k;
    
    cout<<"Winner is Player at position "<<jos(n,k)<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    }
    return 0;
}