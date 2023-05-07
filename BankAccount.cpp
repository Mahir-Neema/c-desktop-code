#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Bank
{
    char name[50];
    char acc_type;
    long int acc_no;
    double bal;

public:
    void getvalue();
    double dep();
    void wid();
    void display();
};

// scope resolution operator
void Bank::getvalue()
{
    cout<<"\nEnter your name: "<<endl;
    cin.getline(name, 50);
    cout<<"Enter account type Savings(s)/Current(c): "<<endl;
    cin>>acc_type;
    // rand generates a random no.
    acc_no = rand();
    cout<<"Your account number is: "<<acc_no;
    if (acc_type == 's')
    {
        bal = 10;
    }
    else
    {
        bal = 100;
    }
}

void Bank::display()
{
    cout<<""<<name;
    cout<<"\n Your balance is: "<<bal;
}

double Bank::dep()
{
    int temp;
    cout<<"Enter the amount you want to deposit: "<<endl;
    cin>>temp;
    bal = bal+temp;
    cout<<"Your updated balance is: "<<bal<<" "<<endl;;
}

void Bank::wid()
{
    int temp;
    cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>temp;
    if(temp < bal)
    {
        bal = bal - temp;
    }
    else
    {
        cout<<"Insufficient balance!\n";
    }
    cout<<"The updated balance is: "<<bal<<" "<<endl;
}

int main()
{
    int ch;
    Bank b1[10];
    for(int i = 1; i <= 10; i++)
    {
        b1[i].getvalue();
        cout<<"\n Enter your choice \n 1.Deposit \n 2.Withdraw \n 3.Display balance: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            b1[i].dep();
            break;

        case 2:
            b1[i].wid();
            break;

        case 3:
            b1[i].display();
            break;

        default:
            cout<<"Invalid input!";
        }
    }
    return 0;
}
