#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int row = 1;
	while(row<=n){
		//Print space(1st triangle)
		int space = n-row;
		while(space){
			cout<<" ";
			space--;
		}
		
		//Print 2nd triangle
		int j=1;
		while(j<=row){
			cout<<j;
			j++;
		}
		
		//Print  3rd triangle
		int start = row-1;
		while(start){
			cout<<start;
			start--;
		}
		cout<<endl;
		row++;
	}
	return 0;
}