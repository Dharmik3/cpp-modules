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
    cout<<"Enter account number:";
    cin>>ac_no;
    cout<<"Enter the type of account:";
    cin>>ac_type;
    cout<<"Enter Initial amount:";
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
    cout<<"\t\tACCOUNT SUMMARY\n\n";
    cout<<"NAME : "<<name<<endl;
    cout<<"\nA/c type : "<<ac_type;
    cout<<"\nA/c number : "<<ac_no;
    cout<<"\nAvailable Balance : "<<balance<<endl<<endl;
}
int main()
{
    Bank h1;
    h1.init_ac();
    h1.display();
    h1.deposite_amount();
    h1.display();
    h1.withdraw_amount();
    h1.display();
    return 0;
}
