#include<iostream>
using namespace std;

int FranToCel(int S,int E, int W){
    while(S<=E){
        int n;
        n = (5*(S-32))/9;
        cout<<n<<endl;

        S = S + W;
    }

}

int main(){
    int S,E,W;
    cin>>S>>E>>W;
    FranToCel(S,E,W);
    return 0;
}