#include<iostream>
using namespace std;

void reverseSwap(int arr[],int n, int s){
    
    int e = n-1;

    while(arr[s]<=arr[e]){
      swap(s,e);
       s++;
       e--;
        }
        return;
}

int main(){
    //int t;
    //cin>>t;
    int N,D;
    cin>>N;

    int a[1000];

    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cin>>D;

    reverseSwap(a,N,0);
    reverseSwap(a,N-D,0);
    reverseSwap(a,N,N-D);

    for(int i=0;i<N;i++){
        cout<<a[i];
    }



    return 0;
}