#include<iostream>
#include<iomanip>

using namespace std;

class Bank
{
    char name[20];
    long int ac_no;
    char ac_type[20];
    double balance;
    double deposite;
    double withdraw;
    public:
        void init_ac();
        void deposite_amount();
        void withdraw_amount();
        void display();
};

void Bank:: init_ac()
{
    cout<<"Enter the depositor name:";
    cin.getline(name,20);
    cout<<"\nEnter account number:";
    cin>>ac_no;
    cout<<"\nEnter the type of account:";
    cin>>ac_type;
    cout<<"\nEnter Initial amount:";
    cin>>balance;

}

void Bank:: deposite_amount()
{
    cout<<"\nEnter deposite amount:";
    cin>>deposite;
    balance+=deposite;
}

void Bank:: withdraw_amount()
{
    cout<<"\nEnter withdraw amount:";
    cin>>withdraw;
    balance-=withdraw;
}

void Bank::display()
{
    cout<<endl;
    cout<<setw(20)<<"NAME"<<setw(20)<<"AMOUNT"<<endl;
    cout<<setw(20)<<name<<setw(20)<<balance<<endl;
}
int main()
{
    Bank h1;
    h1.init_ac();
    h1.display();
    h1.deposite_amount();
    h1.withdraw_amount();
    h1.display();
    return 0;
}
