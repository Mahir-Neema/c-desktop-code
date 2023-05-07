#include<iostream>
using namespace std;

class Box{

    public:
    double getVolume(){
           return length * breadth * height;
    }
    double  setlength(double len){
        length = len;
    }
    double setbreadth(double br){
        breadth = br;
    }
    void setheight(double he){
        height = he;
    }

    
Box operator + (const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}

private:
   double length;
   double breadth;
   double height;
};

int main(){
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;
    Box1.setlength(6.0);
    Box1.setbreadth(7.0);
    Box1.setheight(5.0);

    Box2.setlength(12.0);
    Box2.setbreadth(13.0);
    Box2.setheight(10.0);

    volume = Box1.getVolume();
    cout<<"Volume of Box 1 is: "<<volume<<endl;

    volume = Box2.getVolume();
    cout<<"Volume of Box 2 is: "<<volume<<endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    cout<<"Volume of Box 3 is: "<<volume<<endl;

    return 0;

}


