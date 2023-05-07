#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter the value of N\n";
    cin>>N;
    int arr[N];
    int z=N;
    cout<<"Enter the values of elements\n";

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Enter the value of K\n";

    int K;
    cin>>K;

    while(z>0){
        for(int i=0;i<N;i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                    
            }
        }
        z--;
    }

        cout<<"The Kth smallest element is"<<arr[K-1];

    return 0;
}