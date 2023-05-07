#include<bits/stdc++.h>
using namespace std;

long majority(vector<long> &a, int l, int r) {
	if (l == r) return a[l];

	if (l + 1 == r) {
		if (a[l] != a[r]) return -1;
		else return a[l];
	}

	long mid = l + (r - l) / 2;
	long x1 = 0;
    long y1 = 0;

	long x = majority(a, l, mid);
	long y = majority(a, mid + 1, r);

	for (int i = l; i<=r; i++) {
		if (x == a.at(i)) x1++;
        else if (y == a.at(i)) y1++;
	}

	int n = r-l+ 1;

	if (x1 > y1 && x1> n / 2) return x;
	if (x1 < y1 && y1 > n / 2) return y;

	return -1;
}

int main() {
	int n;
	cin>>n;
	vector<long> v(n);
	for (long i = 0; i < v.size(); ++i) cin>>v[i];
	cout<<(majority(v, 0, v.size() - 1) != -1)<<endl;
    return 0;
}