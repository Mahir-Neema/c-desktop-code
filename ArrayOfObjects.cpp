#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    string s;
    public:
    void setid(void){
        cout<<"Enter id of Employee: ";
        cin>>id;
    }
    void setname(){
        cout<<"Enter Name: ";
        getline(cin, s);
        cout<<endl;
    }
    void getid(){
        cout<<"The id of Employee is: "<<id<<endl;
        cout<<"Name of Employee is: "<<s<<endl;
    }
};

int main(){

    cout<<"Enter the total number of Employee to be added in list \n";
    int n;
    cin>>n;

    Employee fb[n];
    for(int i=0; i<n; i++){
        fb[i].setid();
        fb[i].setname();
        fb[i].getid();
    }
    return 0;
}