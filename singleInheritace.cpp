#include<iostream>
using namespace std;

class vehicle {
    public:
        vehicle() {
    cout<<"This is a Vehicle"<<endl;
        }
};

class car:public vehicle {
    // we are keeping this class content empty beacuse we want class car to inherit all public daata members/functions from class vehicle
};


int main(){
    car obj;
    return 0;
}