#include<bits/stdc++.h>
using namespace std;

long long maxdot_prdt(vector<int> x, vector<int> y) {
    sort(begin(x), end(x));
    sort(begin(y), end(y));
    long long ans = 0;
    for(int i=0; i<x.size(); i++) {
        ans = ans + (long long) x[i] * y[i];
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin>>x[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>y[i];
    }
    cout<<maxdot_prdt(x, y)<<endl;
    return 0;
}