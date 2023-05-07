#include<iostream>
using namespace std;


int main(){
    int arr[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;i<5;j++){
            cin>>arr[i][j];
        }
    }
    
   for(int i=0;i<5;i++){
        for(int j=0;i<5;j++){
            if(arr[i][j]==1) cout<<abs(2-i)+abs(2-j)<<endl;
        }
    }

    return 0;
}