#include<iostream>
#include<iomanip>
using namespace std;

 ostream& Rupees (ostream & output)
    {
        output<<setfill('-')
        <<setw(10)
        <<setiosflags(ios::right)
        <<setiosflags(ios::fixed);
        output<<"Rs";
        return output;
    }

    ostream & Dollar(ostream & output)
    {
         output<<setfill('.')
        <<setw(10)
        <<setiosflags(ios::right)
        <<setiosflags(ios::fixed);
        output<<"$";
        return output;
    }

    ostream& Pound(ostream &output)
    {
        output<<setfill('.')
        <<setw(10)
        <<setiosflags(ios::right)
        <<setiosflags(ios::fixed);
        output<<"POUND";
        return output;
    }
int main()
{
   float money;
   cout<<setw(20)<<setiosflags(ios::right)<<setiosflags(ios::fixed);
   cout<<"INDIAN CURRENCY";
   cout<<setw(20);
   cout<<"USA CURRENCY";
   cout<<setw(20);
   cout<<"UK CURRENCY";
   cout<<endl;
   for(int i=1;i<=10;i++)
   {    money=100*i;
       cout<<Rupees<<setprecision(2)<<setw(10);
       cout.setf(ios::left,ios::adjustfield);
       cout<<setiosflags(ios::fixed)<<setfill(' ')<<setiosflags(ios::showpoint)<<money;

       cout<<Dollar<<setprecision(2)<<setw(15);
       cout.setf(ios::left,ios::adjustfield);
       cout<<setiosflags(ios::fixed)<<setfill(' ')<<setiosflags(ios::showpoint)<<0.014*money;

       cout<<Pound<<setprecision(2)<<setw(10);
       cout.setf(ios::left,ios::adjustfield);
       cout<<setiosflags(ios::fixed)<<setfill(' ')<<setiosflags(ios::showpoint)<<0.0097*money;
        cout<<endl;
   }
    return 0;
}