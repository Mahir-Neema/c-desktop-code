// To find cost of an iphone and number of physical sim card slots
#include<iostream>
using namespace std;

class phone
{
    public:
    double cost;
    int slots;
};

// To find area and volume of a room

class Room
{
    public:
    double length, breadth, height;

    double calculateArea(){
        return length*breadth;
    }
    
    double calculateVolume(){
        return length*breadth*height;
    }

};

int main(){

    phone obj1;
    phone obj2;

    obj1.cost = 1000.00;
    obj1.slots = 1;

    obj2.cost = 1100.00;
    obj2.slots =1;

    cout<<"Cost of iphone 12 is "<<obj1.cost<<endl;
    cout<<"Cost of iphone 12 pro max is "<<obj2.cost<<endl;

    cout<<"Number of physical sim slots in iphone 12 are "<<obj1.slots<<endl;
    cout<<"Number of physical sim slots in iphone 12 pro max are "<<obj2.slots<<endl;



    Room room1;
    room1.length;
    room1.breadth;
    room1.height;

    cout<<"Enter length, breadth and height: "<<endl;
    cin>>room1.length>>room1.breadth>>room1.height;
     
    cout<<"Area is: "<<room1.calculateArea()<<endl;
    cout<<"Volume is: "<<room1.calculateVolume()<<endl;
    return 0;
}