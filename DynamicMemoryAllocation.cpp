#include<bits/stdc++.h>
using namespace std;

bool search_part(const vector<long long>& A, int index,vector<long long>& parts, long long k) {
	if (index >= A.size()) return true;
	for (size_t i = 0; i < parts.size(); i++) {
		if (parts[i] + A.at(index) <= k) {
			parts[i] = parts[i]+A.at(index);
			if (search_part(A, index + 1, parts, k)) return true;
			parts[i] = parts[i]-A.at(index);
		}
	}
	return false;
}

bool part3(vector<long long>& A) {
	long long n = accumulate(A.begin(), A.end(), 0);
	if (n % 3 != 0 or A.size() < 3 or
		*max_element(A.begin(), A.end()) > n / 3) {
		return false;
	}

	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	vector<long long> parts(3, 0);
	return search_part(A, 0, parts, n / 3);
}

int main() {
	int n;
	cin>>n;
	vector<long long> A(n);
	for (size_t i = 0; i < A.size(); ++i) cin >> A[i];
	std::cout<<part3(A) << '\n';
  return 0;
}