#include<iostream>
using namespace std;

class Employee
{
    int id;
   static int count;

    public:
    void setData(void)
    {
        cout<<"Enter the Employee's id:";

        cin>>id;
        count++;
    }
        void getData(void)
        {
            cout<<"The id of the employee is "<<id<<"\nThis employee number is "<<count<<endl;
        }
static void  getCount()
{
    cout<<"The value of counter is "<<count<<endl<<endl;
}


};
int Employee :: count;

int main()
{
Employee dharm,naksh,krish;
dharm.setData();
dharm.getData();
Employee::getCount();

naksh.setData();
naksh.getData();
Employee ::getCount();

krish.setData();
krish.getData();
krish.getCount();
    return 0;
}
