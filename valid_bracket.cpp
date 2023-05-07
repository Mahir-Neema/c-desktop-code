#include<bits/stdc++.h>
using namespace std;

bool isValid(string s, int& count) {
        stack<int> stk;
        int n = s.length();// length od given string
        for(int i=0;i<n;i++){
            char ch = s[i];
            // opening braket , stack push
            // closing braket, stacktop check and pop
            if(ch == '(' || ch == '{' || ch == '[')  stk.push(ch);
            else{
                if(!stk.empty()){
                    char top = stk.top();
                    if((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']')) stk.pop();
                    else {count = i; return 0;}
                }
                else return 0;
            }
        }
        if(stk.empty()) return 1;
        else return 0;
}

int main(){
    string s;
    cin>>s;
    int count = 0;
    if(isValid(s,count)){
        cout<<"Success"<<endl;
    }
    else{
        isValid(s,count);
        cout<<count<<endl;
    }
}