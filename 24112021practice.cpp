#include<bits/stdc++.h>
using namespace std;

void Replace(char str[], char c1, char c2){
	if(str[0]=='\0'){
		return;	
	}
	else{
		if(str[0]==c1){
			str[0]=c2;
		}
	
	}
	
	Replace(str+1,c1,c2);	
}

int main(){
	char str[100];
	char c1,c2;
	cin>>str;
	cin>>c1>>c2;

	Replace(str,c1,c2);

	cout<<str;

	return 0;
}