#include<bits/stdc++.h>
using namespace std;

int optimal(int W, const vector<int> &w) {
	vector<vector<int>> values(w.size() + 1, vector<int>(W + 1));
	for (size_t i = 0; i <= W; i++)  values[0][i] = 0; 
	for (size_t i = 0; i <= w.size(); i++)  values[i][0] = 0; 

	for (size_t i = 1; i <= w.size(); i++) {
		for (size_t j = 1; j <= W; j++) {
			if (j >= w[i - 1]) values[i][j] = max(w[i - 1] + values[i - 1][j - w[i - 1]], values[i - 1][j]);
            else values[i][j] = values[i - 1][j];
		}
	}
	return values[w.size()][W];
}
int main(){
  int w, n;
  cin>>w>>n;
  vector<int> weights(n);
  for (int i=0; i<n; i++) cin>>weights[i];
  cout<<optimal(w, weights)<<endl;
  return 0;
}