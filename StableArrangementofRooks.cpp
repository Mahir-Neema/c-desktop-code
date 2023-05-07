#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        char a[40][40];
        if(n<=(2*k-1)){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i=i++){
                for(int j=0;j<n;j++){
                    a[i][j]= '.';
            }
        }

            for(int i=0;k>=0 && i<n;i=i+2){
                for(int j=0;k>=0 && j<n;j=j+2){
                a[i][j] = 'R';
                k--;
                }
            } 
        }       
    }
    return 0;
}