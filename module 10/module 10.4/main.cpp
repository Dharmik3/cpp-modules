#include <iostream>
using namespace std;

class con_temp {
    double feh;
    float cel;
public:
    con_temp(){}
    con_temp(double temp){

        feh=temp;
    }
    con_temp(float t):cel(t)
    {
        cout<<"Temprature in fahrenheit: "<<1.8*cel+32;
    }

    operator double(){
        double con;
        con = (5.0 / 9) * (feh - 32) + 273.15;
        return con;
    }
};
int main(){
    double kel,feh=98.6;
    float cel=37.1;
    con_temp c1(feh),c2;
    kel = c1;
    cout << "Temprature in kelvin: "<<kel<< endl;
    c2=cel;
    return 0;
}
