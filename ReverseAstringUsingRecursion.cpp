#include<iostream>
using namespace std;

void reverse(string s){

    if(s.length()==0){ // base case
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
    while(1){
    cout<<"Enter the string :) "<< endl;
    string s;
    getline(cin,s);
    
    reverse(s);
    cout<<endl;
    }

    return 0;
}