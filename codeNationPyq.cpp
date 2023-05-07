#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// zig zag traversal

int main() {
	// your code goes here
	// int row = 5, col=4;
	int row;
	int col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
    int currrow = 0;
    
    for(int i=0;i<min(row,col);i++){
        int j = i;
		while(j>=0 && currrow<row){
			cout<<arr[currrow][j]<<" ";
			currrow++;
			j--;
		}
        currrow = 0;
		cout<<endl;
	}

    int k;
    if(row==col) k = 1;
    else k=0;

    int currcol = col-1;
	for(int i=1;i<=min(row,col);i++){
        int j = i;
		while(j<row && currcol>=0){
			cout<<arr[j][currcol]<<" ";
			currcol--;
			j++;
		}
        currcol = col-1;
		cout<<endl;
	}
	return 0;
}
