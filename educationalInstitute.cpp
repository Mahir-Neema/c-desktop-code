#include<iostream>
#include<string>
using namespace std;

class staff
{
public:
    int code;
    string name;
    void getdata(){
        cout<<"Please enter your code: \n";
        cin>>code;
        cout<<"Please enter your name: \n";
        cin>>name;
    }

    void display(){
        cout<<"Your code and name is "<<code<<" "<<name<<endl;
    }
};

class teacher:public staff{
    public:
    string subject;
    int publication;
    void getdata(){
        staff::getdata();
        cout<<"Enter your subject name: \n";
        cin>>subject;
        cout<<"Please enter your publication no. \n";
        cin>>publication;
    }

    void display(){
        staff::display();
        cout<<"Your subject and numberr of publication is "<<subject<<" "<<publication<<endl;
    }
};

class typist:public staff{ 
    public:
        double speed;
        void getdata(){
            staff::getdata();
            cout<<"Enter speed (in words per minute) \n";
            cin>>speed;
        }

        void display(){
            staff::display();
            cout<<"Your speed is: "<<speed<<endl;
        }
};

class officer:public staff{
        char grade;
    public:
        void getdata(){
            staff::getdata();
            cout<<"Enter your grade: "<<endl;
            cin>>grade;
        }

        void display(){

            staff::display();
            cout<<"Your grade is: "<<endl;
        }
};

class regular:virtual public typist {
    public:
    double salary;
    void getdata(){
        typist::getdata();
        cout<<"Enter salary: \n";
        cin>>salary;
    }

    void display(){
        typist::display();
        cout<<"Your salary is "<<salary<<endl;
    }
};

class casual:virtual public typist {
    public:
    double daily_wages;
    void getdata(){
        staff::getdata();
        typist::getdata();
        cout<<"Enter your daily wages: \n";
        cin>>daily_wages;
    }
};

int main(){

    staff obj1;
    teacher obj2;
    typist obj3;
    officer obj4;
    regular obj5;
    casual obj6;
    int ch;
    char chq;
    cout<<"Select any one option 1) Typist    2) Officer    3)Teacher  ;  \n";
    cin>>ch;
    switch(ch){
        case 1:
        {
            cout<<"(r) Regular or (c) casual: \n";
            cin>>chq;
            if(chq == 'r' || chq == 'R'){
                obj5.getdata();
                obj5.display();
            }
            else{
                obj6.getdata();
                obj6.display();
            }
            break;
        }

        case 2:
        {
            obj4.getdata();
            obj4.display();
            break;
        }

        case 3:
        {
            obj2.getdata();
            obj2.display();
            break;
        }

    }


    return 0;
}