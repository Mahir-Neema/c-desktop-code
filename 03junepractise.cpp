#include <bits/stdc++.h>
using namespace std;

int smallest(int arr[], int n){
    // using binary search for searching smallest element with O(logN) time complexity
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
        mid = s + (e-s)/2;
    }
    return s;
}

bool pairInSortedRotated(int arr[], int n, int sum){
    int i = smallest(arr,n);
    
    int s = (i)%n;  // s is now index of smallest element
    int l = i-1;        // l is now index of largest element
 
    // Keep moving either s or l till they meet
    while (s != l){
         // If we find a pair with sum , we return true
         if (arr[s] + arr[l] == sum)
              return true;
 
         // If current pair sum is less, move to the higher sum
         if (arr[s] + arr[l] < sum)
              s = (s + 1)%n;  // % is used for rotation of array
         else  // Move to the lower sum side
              l = (l - 1)%n;
    }
    return false;
}

int main() {
	//code
	int arr[] = {11, 15, 6, 8, 9, 10};

    //    15
    // 11 |
    //    |           10
    //    |       9
    //    |   8
    //    6
    //    here arr[2]=6 is smallest element


    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    if (pairInSortedRotated(arr, n, sum))
        cout << "Array has two elements with sum 16\n";
    else
        cout << "Array doesn't have two elements with sum 16\n";
	return 0;
}