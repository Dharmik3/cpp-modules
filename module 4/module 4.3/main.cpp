#include<iostream>
using namespace std;

class convertTemp
{
    float t;
    public:
    void setTemp()
    {
        cout<<"Enter temprature in fahrenheit:";
        cin>>t;

    }
    void displayTemp()
    {
        float tc;
        tc=(t-32)/1.8;
        cout<<"Temperature in celcius :"<<tc<<endl;

    }
};
int main()
{
    convertTemp o1;
    o1.setTemp();
    o1.displayTemp();
    return 0;
}