#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s = "adsfjhalksdjf";
    // cout<<'a'-'A'<<endl; = 32
    //convert into upper case

    /* for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        s[i]=s[i]-32;
    }
    
    cout<<s<<endl;

    */

   // OR WE CAN USE FUNCTION

   transform(s.begin(), s.end(), s.begin(), ::toupper);

   cout<<s<<endl;

   // for upper to lower USE tolower :)

    return 0;
}