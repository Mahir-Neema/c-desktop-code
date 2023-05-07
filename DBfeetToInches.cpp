#include<iostream>
using namespace std;

class DB{

    double ft, inch;

public:
    double convert();
    void display();
};

double DB::convert()
{
    cout<<"Enter the value in feet: ";
    cin>>ft;
    inch = ft*12;
}

void DB :: display(){

    cout<<"The value in inches is: "<<inch<<endl;
}

int main(){
    DB obj1;
    obj1.convert();
    obj1.display();
    return 0;
}