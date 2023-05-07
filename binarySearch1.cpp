#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int* arr,int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==k) return mid;
        else if(arr[mid]>k) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}



int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<m;i++) cout<<BinarySearch(a,n,b[i])<<" ";
    return 0;
}