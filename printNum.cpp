#include <iostream>
using namespace std;

void Duplicateinput(){
	int N;
	cin>>N;
	int a[100];

	for(int i=0;i<N;i++){
		cin>>a[i];
	}
}

int Duplicateoutput(int N,int a[100]){
	
	for (int  i = 0; i < N; i++)
	{
		for(int j = i+1;j<N; j++){
			if(a[j]==a[i]){
				return(a[i]);
			}
		}
	}
	return (0);

}

int main() {
	int t;
	cin>>t;
	int K[t];
	for(int k=0;k<t;k++){
		Duplicateinput();
	};
	for(int k=0;k<t;k++){
		cout<<Duplicateoutput<<endl;;
	};

	return 0;
}