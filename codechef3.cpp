#include<iostream>
#include<limits>
using namespace std;

void compare(int arr[],int n){
    int maxi;
    int mini; 
    int INT_MAX = mini;
    int INT_MIN = maxi;
    
    for(int i=0;i<n;i++){
        maxi = max(arr[i],maxi);
        mini = min(arr[i],mini);
        
    }
    
    cout<<"The maximum element of array is: "<<maxi;
    cout<<"\nThe minimum element of array is: "<<mini;
    
    return;
    
}


int main() {
	//code
	
	int arr[] = {1000,11,445,1,330,3000};
	int n=6;
	
	compare(arr,6);
	
	return 0;
}