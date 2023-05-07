// Area of circle using private access modifier
#include<iostream>
using namespace std;

class circle{

    private:
    double radius;

    public:
    double Calculate_area(double r){
        radius = r;
        double area =  3.14 * radius * radius;
        cout<<"Area of circle having radius "<<r<<" Units is "<<area<<" Units^2"<<endl;
    }
};

    int main(){

        circle obj;
        cout<<"Enter Radius"<<endl;
        int z;
        cin>>z;
        obj.Calculate_area(z);

       
        return 0;
    }
