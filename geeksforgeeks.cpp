#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    
    int prevfact= factorial(n-1);
    
    return n*prevfact;

}

int main(){
    while(1){
    cout<<" Number type kar :)      -";
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    }

    return 0;
}