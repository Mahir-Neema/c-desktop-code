#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x=a;
            y=b;

        }

        void CalculateDistance(){
            cout<<"The Distance between points is: "<<sqrt((x^2)+(y^2));

        }
};

Point distance(Point p, Point q){
    Point v;
    v.CalculateDistance(p.a - q.a),(p.b-q.b));
    return v;

}


int main(){
    Point p(1,1);
    Point q(4,6);
    distance = distance(p,q);

    return 0;
}