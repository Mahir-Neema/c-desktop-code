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
    
    //O(N^2)

    for(int i=0;i<N-1;i++){
        int min=i;
        for(int j=i+1;j<N;j++){
            if(a[j]<a[min]){
                min=j;
            }

        }
        if(min!=i){
            swap(a,min,i);
        }
    }

    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}