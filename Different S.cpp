#include<bits/stdc++.h>
using namespace std;

vector<int> summands(int n) {
    vector<int> s;
    for (int i = 1; i <= n; i++) {
        n = n - i;
        if (n <= i) {
            s.push_back(n + i);
        } 
        else if (n == 0) {
            s.push_back(i);
            break;
        } 
        else {
            s.push_back(i);
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> s = summands(n);
    cout << s.size()<<'\n';
    for (int i=0;i<s.size(); i++) {
        cout<<s[i]<<' ';
    }
    return 0;
}