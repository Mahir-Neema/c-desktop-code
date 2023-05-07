#include<iostream>
using namespace std;

class student {
    public:
    void func(int x){
        cout<<"Value of x is:"<<x<<endl;  
    }
    void func(int x, int y){
        cout<<"Value of x and y: "<<x<<" "<<y<<endl;
    }
};

int main(){

    student obj;
    obj.func(7);
    obj.func(3.14);
    obj.func(55, 15);
    return 0;
}