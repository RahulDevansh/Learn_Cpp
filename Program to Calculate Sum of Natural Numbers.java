// C++ Program to Calculate Sum of Natural Numbers

#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int num ;
    cout<<"Enter nature number till you want sum"<<endl;
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++) {
        sum+=i;
    }
    cout<<sum<<" The sum of natural number ";
    return 0;
}
