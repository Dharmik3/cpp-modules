#include<iostream>
#include<cstring>
using namespace std;

class employee
{
    char name[20];
    int id;
    public:
    employee()
    {
        strcpy(name,"none");
        id=0;
    }
    void setNameId()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        cout<<endl;
    }
    void getNameId()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"ID : "<<id<<endl<<endl;
    }
};
int main()
{
    int n;
    cout<<"How many employee you want to record: ";
    cin>>n;
    employee e[n];
    int i;
    for( i=0;i<n;i++)
    {
        e[i].setNameId();
    
    }

    
    
    cout<<endl<<"=====================\n";
    for(int i=0;i<n;i++)
    {
        e[i].getNameId();
    }

    return 0;
}