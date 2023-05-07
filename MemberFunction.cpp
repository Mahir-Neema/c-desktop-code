#include<iostream>
using namespace std;

class student{

    public:
    char name[30], clas[10];
    int roll, age;

    void enter(){

        cout<<"Enter student Name: "<<endl;
        cin.getline(name, 50);
        cout<<"Enter student Age: "<<endl;
        cin>>age;
        cout<<"Enter student roll number: "<<endl;
        cin>>roll;
        cout<<"Enter student class: "<<endl;
        cin.getline(clas,10);
    }

    void display(){
        cout<<"\n Age \t Name \tRoll number \t class";
        cout<<"\n"<<age<<"\t"<<name<<"\t"<<roll<<"\t"<<clas;
    }

};

int main(){

    student obj1;
    obj1.enter();
    obj1.display();

    return 0;
}