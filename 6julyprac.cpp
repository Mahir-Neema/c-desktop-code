#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

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
	
	int currcol = 0;
	for(int i=0;i<min(row,col);i++){
        int j = i;
		while(j>=0 && currcol<=col){
			cout<<arr[j][currcol]<<" ";
			currcol++;
			j--;
		}
        currcol = 0;
		cout<<endl;
	}

    int currrow = row-1;
    int k;
    if(row==col) k = 1;
    else k=0;
    for(int i=k;i<min(row,col);i++){
        int j = i;
		while(j<min(row,col) && currrow>0){
			cout<<arr[currrow][j]<<" ";
			currrow--;
			j++;
		}
        currrow = row-1;
		cout<<endl;
	}
	return 0;
}
