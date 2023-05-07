// #include<stdio.h>
// #include<stdlib.h>
// #include <complex>
// #include <queue>
// #include <set>
// #include <unordered_set>
// #include <list>
// #include <chrono>
// #include <random>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <string>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <stack>
// #include <iomanip>
// #include <fstream>
#include <bits/stdc++.h>


using namespace std;
unordered_map<string,int> monthMap; 

bool yearsort(string s1,string s2){
    int a1 = stoi(s1.substr(5));
    int a2 = stoi(s2.substr(5));
    if(a1==a2){
        int monthval1 = monthMap[s1.substr(2,3)];
        int monthval2 = monthMap[s2.substr(2,3)];
        if(monthval1==monthval2) return stoi(s1.substr(0,2))<stoi(s2.substr(0,2));
        return monthval1<monthval2;
    }
    return a1<a2;
}

int main(){
    int n; cin>>n;
    string s[1001]; for(int i=0;i<n;i++) cin>>s[i];

    monthMap["Jan"] = 1;
    monthMap["Feb"] = 2;
    monthMap["Mar"] = 3;
    monthMap["Apr"] = 4;
    monthMap["May"] = 5;
    monthMap["Jun"] = 6;
    monthMap["Jul"] = 7;
    monthMap["Aug"] = 8;
    monthMap["Sep"] = 9;
    monthMap["Oct"] = 10;
    monthMap["Nov"] = 11;
    monthMap["Dec"] = 12;

    sort(s,s+n,yearsort);
    // cout<<s[0].substr(2,3);

    for(int i=0;i<n;i++) cout<<s[i]<<" ";

    return 0;
}