#include<iostream>
using namespace std;



class A{
    float a,b;

    public:
    void display(int x, int y){
        a=x;
        b=y;
        cout<<"Integer\n";
        cout<<a<<" "<<b<<endl;


    }
    void display(float x, float y){
        a=x;
        b=y;
        cout<<"Float\n";
        cout<<a<<" "<<b<<endl;
    }
};

int main(){

    A obj;
    float x,y;
    cin>>x>>y;
    obj.display(x,y);
    

    return 0;
}
