#include <iostream>
using namespace std;
class Array
{
    int *p;
    int size;

public:
    void creteArray(int capacity)
    {
        size = capacity;
        p = new int[size];
    }
    void setArray()
    {
        cout << "Enter elements of array:" ;
        int i;
        for (i = 0; i < size; i++)
            cin >> *(p + i);
    }
    void Display()
    {
        for (int i = 0; i < size; i++)
            cout << endl
                 << *(p + i) << " ";
    }
};
int main()
{
    Array a;
    a.creteArray(3);
    a.setArray();
    a.Display();
    return 0;
}