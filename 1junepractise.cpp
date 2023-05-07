#include<bits/stdc++.h>
using namespace std;

vector<int> dp_seq(int n){
  vector<int> seq;
  vector<int> dp = {0};
  vector<int> opr = {1};
  if (n == 1){
    seq.push_back(1);
    return seq;
  }
  for (int i = 2; i <= n; i++){
    int vab1 = 999999;
    int vab2 = 999999;
    int vab3 = 999999;
    vab1 = dp[i - 2];
    if (i%2==0) vab2 = dp[(i/2) - 1];
    if (i%3==0) vab3 = dp[(i / 3) - 1];
    if (vab3 <= vab1 && vab3 <= vab2){
      opr.push_back(3);
      dp.push_back(vab3 + 1);
    }
    else if(vab2<=vab1 && vab2<=vab3){
      opr.push_back(2);
      dp.push_back(vab2 + 1);
    }
    else if (vab1<=vab2 && vab1<=vab3){
      opr.push_back(1);
      dp.push_back(vab1 + 1);
    }
  }

  int i = n;
  while (i >= 1){
    seq.push_back(i);
    if (opr[i - 1] == 1) i = i- 1;
    else if (opr[i-1] == 2) i /= 2;
    else i /= 3;
  }
  reverse(seq.begin(), seq.end());
  return seq;
}


int main(){
  int m;
  cin>>m;
  vector<int> seq = dp_seq(m);
  cout<<seq.size() - 1<<endl;
  for (int i = 0; i < seq.size(); ++i) cout<<seq[i]<<" ";
  return 0; 
}