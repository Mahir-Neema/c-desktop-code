#include<iostream>
using namespace std;

class Hello_world{
    public:
    Hello_world() // constructor 
    {
        cout<<"Constructor is called"<<endl;
    }

    // there can only be one destructor in a  class]
    //  destructors do not allow any parameters
    //  when destructor is ot specified in a class , compiler generates a default destructor
    

 
    ~Hello_world(){
        cout<<"Destructor is called"<<endl;
    }

    void display(){
        cout<<"hello world"<<endl;
    }
};

int main(){
    Hello_world obj;
    obj.display();
    return 0;
}