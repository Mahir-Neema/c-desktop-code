#include<iostream>
using namespace std;

int main(){
    string str;

    string s1="fam";
    string s2="ily";

    s1.append(s2);
    cout<<s1<<endl;

    // instead of append we can direct print complete word Just by cout<<s1+s2<<endl;
    return 0;
}