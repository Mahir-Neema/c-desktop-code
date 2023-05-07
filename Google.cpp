#include<iostream>
using namespace std;
void sort012(int arr, int n, int k)
{   int N;
    int ARR[100];
   //   Write your code here
    for(int i=0;i<N;i++){
        
        if(ARR[i]=k){
            cout<<"k"<<" ";
        }
        
    }
}

int main(){
    int T,N;
    cin>>T;
    int ARR[100];
    int count=0;
    while(T>0){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>ARR[i];
            count++;
        }
        
        sort012(ARR[count], N, 0);
        sort012(ARR[count], N, 1);
        sort012(ARR[count], N, 2);   
        
        T--;
    }
    return 0;
}