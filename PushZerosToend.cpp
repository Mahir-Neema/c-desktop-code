#include<iostream>
using namespace std;

int main(){
    //int t;
    //cin>>t;
    int n=7; 
    int a[7]={0,4,5,0,9,8,1};;

    //while(t--){
    //cin>>n;

    /*for(int i=0;i<n;i++){
        cin>>a[i];
    }
    */

    for(int i=0;i<n;i++){
        if(a[i]==0){
            for(int j=i+1;j<n;j++){
                if(a[j]!=0){
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    break;
                }
            }
        }
    }

        for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
//}

    return 0;
}