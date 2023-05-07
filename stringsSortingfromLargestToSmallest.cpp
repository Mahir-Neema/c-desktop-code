#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    // sorting from largest to smallest
    string s = "498723659";

    sort(s.begin(), s.end(), greater<int>());

    cout<<s;
    return 0;
}