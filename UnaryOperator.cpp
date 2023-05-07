// To write a class called 'number' with one integer data member and overload unary operator ++ to increament data member and overload unary operator
#include<iostream>
using namespace std;

class Number{
    int x;
    public:
    Number(){
        x=0;
    }
    void display(){
        cout<<"The value of x is: "<<x<<endl;
    }

    void operator ++(){
        x = ++x;
    }

};

int main(){
    Number obj;
    ++obj;
    obj.display();
    return 0;
}