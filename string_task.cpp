#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>



int main(){
    string s;
    cin>>s;
    int n = s.length();

    string str="";
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') continue;
        int temp = (int)((char) s[i]);
        if(temp>=65 || temp<=90) {
            temp+=32;
            char ch = temp;
            str.push_back(temp);
        }
        else str.push_back(s[i]);
    }

    for(auto &i:str) cout<<"."<<i;
    return 0;
}