#include <iostream>
#include <math.h>
using namespace std;

class triangle
{
    float a, b, c;

public:
    void Area()
    {
        cout << "Enter three sides of triangle: " << endl;
        cin >> a >> b >> c;
        float s = (a + b + c) / 2;
        float area;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the triangle is " << area << endl;
    }
};
class circle
{
    int r;

public:
    void Area()
    {
        cout << "Enter the radius of the circle:" << endl;
        cin >> r;
        float area;
        area = 3.14 * r * r;
        cout << "Area of the circle is: " << area << endl;
    }
};
class square
{
    int l;

public:
    void Area()
    {
        cout << "Enter the length of one side square:" << endl;
        cin >> l;
        cout << "Area of the square is: " << l * l << endl;
    }
};
int main()
{
    triangle t1;
    square s1;
    circle c1;
    t1.Area();
    s1.Area();
    c1.Area();
    return 0;
}