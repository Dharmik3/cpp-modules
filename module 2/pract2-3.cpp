#include <iostream>
using namespace std;

class strings
{   char *p;
    p = "Dharmik Patel";

public:
    void PrintPointer()
    {

        for (int i = 0; *(p + i); i++)
            cout << *(p + i);
        cout << endl;
    }
};
int main()
{
    strings s1;
    s1.PrintPointer();

    return 0;
}
