#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	switch(100){
		case 100: cout<<"The number of 100 notes is "<<n/100<<endl;
		          n = n%100;
		case 2:   cout<<"The number of 50 notes is "<<n/50<<endl;
		          n = n%50;
		case 3:   cout<<"The number of 20 notes is "<<n/20<<endl;
		          n = n%20;
		case 4:   cout<<"The number of 10 notes is "<<n/10<<endl;
		          n = n%10;
		          break;
		default:  cout<<0<<endl;
		          break;
	}
	return 0;
}