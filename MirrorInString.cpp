#include <iostream>
using namespace std;
string reverse(string s,int n){
    int st=0;
    int e=n-1;
    while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    return s;
}

int main() {
	int T;
	cin>>T;
	while(T){
		int n;
		cin>>n;
		string s,s1;
		cin>>s;
		char key = s[0];
		
		for(int i=n-1;i>=0;i--){
			if(i==0){
				cout<<s[0]<<s[0]<<endl;
			}
			else if(s[i]==key && 2*(i+1)<n){
					s.erase(i,n);
                    s1 = reverse(s,i);
                    cout<<s+s1<<endl;
                    break;
				}
				else{
					continue;
				}
		}
		
		T--;
	}
	return 0;
}