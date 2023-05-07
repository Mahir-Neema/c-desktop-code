#include<bits/stdc++.h>
using namespace std;

string largest_number(vector <string> v) {
    
    stringstream ret;
    for (int i = 0; i < v.size(); i++) {
        ret << v[i];
    }
    string ans;
    ret >> ans;
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector <string> v(n);
    for (int i=0;i<v.size();i++) {
        cin>>v[i];
    }
    cout<<largest_number(v);
    return 0;
}