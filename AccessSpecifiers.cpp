// Area of circle using public access modifier
#include<iostream>
using namespace std;

class circle{

    public:
    double radius;
    double Calculate_area(){
        return 3.14 * radius * radius;
    }
};

    int main(){

        circle obj;
        cout<<"Enter Radius"<<endl;
        cin>>obj.radius;

        cout<<"Area of circle having radius "<<obj.radius<<" Units is "<<obj.Calculate_area()<<" Units^2"<<endl;
        return 0;
    }
