#include <iostream>
using namespace std;
class car
{
    int gear;

public:
    car(int a)
    {
        gear = a - 2;
        cout << "Car has " << gear << " gear" << endl;
    }
};

class sportscar : public car
{
    int gear;

public:
    sportscar(int b) : car(b)
    {
        gear = b;
        cout << "SportsCar has " << gear << " gear" << endl;
    }
};
int main()
{
    sportscar c1(7);
    return 0;
}