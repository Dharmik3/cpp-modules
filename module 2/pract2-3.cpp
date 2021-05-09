#include <iostream>
using namespace std;

class strings
{   char *p;
    public:
        void setPointer(){
    char name[]="Dharmik Patel";
    p=name;
}
    void PrintPointer()
    {
    int i;
        for ( i = 0; *(p + i); i++)
            cout << *(p + i);
        cout << endl;
    }
};
int main()
{
    strings s1;
    s1.setPointer();
    s1.PrintPointer();

    return 0;
}
