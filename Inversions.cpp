#include<bits/stdc++.h>
using namespace std;

long long merge_inversions(vector<int> &a, vector<int> &b, int l, int mid, int h){
  int k = l, i = l, j = mid + 1;
  int Count = 0;

  while (i <= mid && j <= h){
    if (a[i] <= a[j]) b[k++] = a[i++];
    else
    {
      b[k++] = a[j++];
      Count += (mid-i+1); 
    }
  }

  while (i <= mid)
    b[k++] = a[i++];

  for (int i=l;i<=h;i++) a[i] = b[i];
  return Count;
}

long long inversions(vector<int> &a, vector<int> &b, int l, int r){
  if (r == l) return 0;
  long long no_of_inversions = 0;
  int m = l+((r-l)/2);
  no_of_inversions += inversions(a, b, l, m);
  no_of_inversions += inversions(a, b, m + 1, r);
  no_of_inversions += merge_inversions(a, b, l, m, r);
  return no_of_inversions;
}

int main(){
  long n;
  cin >> n;
  vector<int> v(n);
  for (long i=0;i<n;i++) cin >> v[i];
  vector<int> b=v;
  cout<<inversions(v, b, 0, v.size() - 1)<<endl;
  return 0;
}