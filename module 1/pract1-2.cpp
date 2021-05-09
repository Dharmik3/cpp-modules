#include<iostream>
using namespace std;
#include<stdio.h>

class student
{
    char name[30];
    int age;
    public:
        void read()
        {
            cout<<"Enter student name: ";
            gets(name);
            cout<<"Enter student's age: ";
            cin>>age;
            fflush(stdin);
        }

        void display()
        {
            cout<<"Name :-"<<name<<endl;
            cout<<"Age  :-"<<age<<endl;

        }
};
int main()
{
    student s1,s2;
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    return 0;
}