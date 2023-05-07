#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
} ;

int main(){

    student a;
    a.name = "Mahir";
    a.age = 20;
    a.gender = 1;
    cout<<"Name = "<<a.name;
    cout<<"\nAge = "<<a.age;
    cout<<"\nGender ="<<a.gender;

    return 0;

}