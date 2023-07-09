// C++ Program to Check Leap Year

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year ;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if((year%100==0 && year%400==0) || ((year%4==0)&&(year%100!=0))) {
        cout<<year<<" The year is leap year"<<endl;

    }else {
        cout<<year<<" Year is not leap Year";
    }
    return 0;
}
