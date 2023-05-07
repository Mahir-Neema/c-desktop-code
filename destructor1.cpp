#include<iostream>
using namespace std;

class students{

    public:
    int roll_no;
    ~students(){
        cout<<"destructor is called for roll number"<<roll_no<<endl;
    }

};

int main(){

    students obj1;
    obj1.roll_no = 4;
    int i =0;
    while(i<5){
          students obj2;
          obj2.roll_no = i;
          i++;
    }

    return 0;
}