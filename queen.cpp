#include <bits/stdc++.h>
using namespace std;
    
void solve(){
    for(int A=0;A<8;A++){
        for(int B=0;B<8;B++){
            vector<vector<int>> ans(8,vector<int> (8,0));
            ans[A][B]=1;
            if((A!=0 && A!=7) && (B!=0 && B!=7)){
                if(((A-2)>=0&&(B-1)>=0)&&((A+1)<=7&&(B+3)<=7)){
                    ans[A-2][B-1]=2;
                    ans[A+1][B+3]=2;
                }
                else if(((A-2)>=0&&(B+1)<=7)&&((A+1)<=7&&(B-3)>=0)){
                    ans[A-2][B+1]=2;
                    ans[A+1][B-3]=2;
                }
                else if(((A-1)>=0&&(B+2)<=7)&&((A+3)<=7&&(B-1)>=0)){
                    ans[A-1][B+2]=2;
                    ans[A+3][B-1]=2;
                }
                else if(((A-1)>=0&&(B-3)>=0)&&((A+2)<=7&&(B+1)<=7)){
                    ans[A+2][B+1]=2;
                    ans[A-1][B-3]=2;

                }
            }

            else{
                vector<pair<int,int>> v;
                int count = 0;
                if((A==0 && B==0) || (A==0 && B==7) || (A==7 && B==0) || (A==7 && B==7)) count=1;
                else count = 2;
                v.push_back({-2,-1}); //1
                v.push_back({2,1}); //2
                v.push_back({-2,1}); // 3
                v.push_back({2,-1}); //4
                v.push_back({-1,2}); //5
                v.push_back({1,-2});//6
                v.push_back({1,2});//7
                v.push_back({-1,-2});//8
                for(int i=0;i<8;i++){
                    int nrow = A + v[i].first;
                    int ncol = B + v[i].second;
                    if(nrow>=0 && nrow<8 && ncol>=0 && ncol<8 && count>0) {ans[nrow][ncol] = 2; count--;}
                }
            }

            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            cout<<endl;
            cout<<endl;
        }//2 bracket
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}