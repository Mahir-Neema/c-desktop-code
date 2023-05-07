#include<bits/stdc++.h>
using namespace std;

int Getpivot(int arr[], int n){
    int s=0; int e = n-1; int mid = s +(e-s)/2; // here pivot is refered to the smaller one
    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
        mid = s +(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[], int k, int n){
    int s=0; int e = n-1; int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==k) return mid;
        if(k>arr[mid]) s=mid+1;
        else e=mid-1;
        mid = s +(e-s)/2;
    }
    return -1;
}

int main(){
    return 0;
}