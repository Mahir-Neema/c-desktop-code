#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];

    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    for (int i = 1; i < N; i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = temp;
    }
    

    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}