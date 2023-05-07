#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	int n = s.length();
	int i=0;
	string g;
	while(i<n){
		if(s[i]=='.'){ g.push_back('0'); i++;}
		else if(i !=n-1 && s[i]=='-'&& s[i+1]=='.') {g.push_back('1'); i=i+2;}
		else if(i !=n-1 && s[i]=='-'&& s[i+1]=='-') {g.push_back('2'); i=i+2;}
	}
	cout<<g<<endl;
	return 0;
}