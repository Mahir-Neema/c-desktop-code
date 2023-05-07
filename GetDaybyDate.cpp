#include<iostream>
#include<string>
using namespace std;

int GetDayVal(int d,int m, int y){
    int temp[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y = y - (m < 3);
    return (y + y/4 - y/100 + y/400 + temp[m-1] + d) % 7;
}

string dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.
    int daynum = GetDayVal(day, month, year);
    if(daynum==0) return "Sunday";
    else if(daynum==1) return "Monday";
    else if(daynum==2) return "Tuesday";
    else if(daynum==3) return "Wednesday";
    else if(daynum==4) return "Thursday";
    else if(daynum==5) return "Friday";
    else if(daynum==6) return "Saturday";
    return "";
}

int main(){
    int day,month,year;
    cin>>day>>month>>year;
    cout<<dayOfTheWeek(day,month,year);
    return 0;
}