#include <iostream>
using namespace std;
int Sum(int *arr,int n){
	if(n==0){
		return 0;
	}
    cout<<arr[0]<<endl;
	return (arr[0]+Sum(arr+1,n-1));
}

int main() {
	// your code goes here
	int arr[5]={5,5,3,5,5};
	cout<<Sum(arr,5)<<endl;
	return 0;
}