#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        double h;
        cin>>h;
        h=h/1000;
        double velocity = sqrt(2*9.81*h);
        cout<<velocity<<" "; 
    }
    cout<<endl;

    return 0;
}