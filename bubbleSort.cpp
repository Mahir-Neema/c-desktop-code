#include<iostream>
using namespace std;
    void swap(int a[],int i,int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

int main(){
    int N;
    cin>>N;
    int a[N];

    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    for(int i=0;i<N-1;i++){
        bool swapped = false;
        for(int j = 0;j<N-1-i;j++){
            if(a[j+1]<a[j]){
                swapped = true;
            swap(a,j+1,j);
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}