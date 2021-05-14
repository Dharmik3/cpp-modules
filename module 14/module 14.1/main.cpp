#include<iostream>
using namespace std;

int main()
{
    cout.fill('*');
    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    cout<<"VALUE";


    cout.width(26);
    cout<<"SQUARE OF THE VALUE";

    cout<<endl;
    cout.fill('.');
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(3);
    cout.setf(ios::fixed,ios::floatfield);
    for(float i=1;i<=10;i=i+0.5)
    {   static int j=1;
    cout.fill('.');
    cout.width(10);
    cout.setf(ios::right,ios::adjustfield);
    cout<<i;

    cout.fill('-');
    cout.setf(ios::right,ios::adjustfield);
    cout.width((15+j));
    cout<<i*i<<endl;
    if(i>=5.0)
    j--;
    else
    j++;
    }
    return 0;
}
