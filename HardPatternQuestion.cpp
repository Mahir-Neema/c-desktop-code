#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int row = 1;
    while(row<=5){
    	int col = 1;
    	while(col+row-1<=n){
    		cout<<col<<" ";
    		col++;
    	}
    	
        col = 1;
        while(row-col>0 && row>1){
        	cout<<"*"<<" "<<"*"<<" ";
        	col++;
        }
        
        col = n-row+1;
        while(col){
        	cout<<col<<" ";
        	col--;
        }
    	cout<<endl;
    	row++;
    }
    
	return 0;
}