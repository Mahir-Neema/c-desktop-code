#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;


#define ll long long 
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front

void solve(){
    for(int A=0;A<8;A++){
        for(int B=0;B<8;B++){
            vector<vector<int>> ans(8,vector<int> (8,0));
            ans[A][B]=1;
            vector<pair<int,int>> v;
            int count = 2;
            bool flag = false;
            if((A==0 && B==0) || (A==0 && B==7) || (A==7 && B==0) || (A==7 && B==7)){
                flag = true;
                count--;
            }
            // v.push_back({{-2,-1}, {2,1}}); //1
            // v.push_back({{-2,1}, {2,-1}}); // 3
            // v.push_back({{-1,2}, {1,-2}}); //5
            // v.push_back({{1,2}, {-1,-2}});//7
            if(A==1 && B==6){
                ans[0][3]=2;
                ans[3][6]=2;
            }
            else if((A==1) && (B>=1 ||B<6)){
                v.push_back({-2,1}); // 3
                v.push_back({3,-1}); //4
                v.push_back({-1,2}); //5
                v.push_back({2,1}); //2
                v.push_back({1,2});//7
                v.push_back({1,-2});//6
                v.push_back({-1,-2});//8  
                v.push_back({-2,-1}); //1
            }
            else if(A==6 && (B>=1 ||B<=6)){
                v.push_back({-2,1}); // 3
                v.push_back({-1,2}); //5
                v.push_back({2,1}); //2
                v.push_back({2,-1}); //4
                v.push_back({1,2});//7
                v.push_back({1,-2});//6
                v.push_back({-1,-2});//8  
                v.push_back({-2,-1}); //1
            }
            else{
                v.push_back({-2,-1}); //1
                v.push_back({2,1}); //2
                v.push_back({-2,1}); // 3
                v.push_back({2,-1}); //4
                v.push_back({-1,2}); //5
                v.push_back({1,-2});//6
                v.push_back({1,2});//7
                v.push_back({-1,-2});//8
            }
            for(int i=0;i<8;i++){
                // int row1 = A + v[i].first.first;
                // int col1 = B + v[i].first.second;
                // int row2 = A + v[i].second.first;
                // int col2 = B + v[i].second.second;
                int nrow = A + v[i].first;
                int ncol = B + v[i].second;

                // if(flag){
                //     if(col1>=0 && col1<8 && row1>=0 && row1<8 && count>0) {ans[row1][col1] = 2;count--;break;}
                //     else if(col2>=0 && col2<8 && row2>=0 && row2<8 && count>0) {ans[row2][col2] = 2;count--;break;}
                // }
                // if(col1>=0 && col1<8 && row1>=0 && row1<8 && col2>=0 && col2<8 && row2>=0 && row2<8 && count>0){
                //     ans[row1][col1] = 2;
                //     ans[row2][col2] = 2;
                //     count--;
                //     break;
                // }

                if(flag){
                    if(nrow>=0 && nrow<8 && ncol>=0 && ncol<8 && count>0) {ans[nrow][ncol] = 2; count--;}
                }
                if(nrow>=0 && nrow<8 && ncol>=0 && ncol<8 && count>0){
                    ans[nrow][ncol] = 2; 
                    count--;
                }
            }
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"\n"<<"\n"<<"\n";
        }
    }//2 bracket
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
        
    }
    return 0;
}