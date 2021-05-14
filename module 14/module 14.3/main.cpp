#include<iostream>
#include<iomanip>
using namespace std;

class manage
{
    char *p;
    int code;
    float cost;
    public:
        manage()
        {
            p=new char[20];
            cout<<"Enter Item name:";
            cin>>p;
            cout<<"Enter Item Code:";
            cin>>code;
            cout<<"Enter Item Cost:";
            cin>>cost;
            cout<<endl;
        }

        ~manage()
        {
            delete []p;
        }

      void Display()
      {
          cout<<setw(15);
          cout.setf(ios::left,ios::adjustfield);
          cout<<this->p;
            cout<<setw(5);
            cout.setf(ios::right,ios::adjustfield);
            cout<<this->code;
            cout<<setw(15)<<setprecision(2);
            cout.setf(ios::showpoint);
            cout.setf(ios::fixed,ios::floatfield);
            cout<<this->cost<<endl;
      }
};
  void indexDisplay()
        {
            cout<<setw(15)<<setiosflags(ios::left)<<"NAME";
            cout<<setw(5);
            cout.setf(ios::right,ios::adjustfield);
            cout<<"CODE";
            cout<<setw(15)<<"COST"<<endl;
        }
    void horizontalLine()
    {
        cout<<setw(40)<<setfill('-')<<"\n";
            cout.fill(' ');
        cout<<endl;
    }
int main()
{   int size;
    cout<<"How many products ou wants to enter:";
    cin>>size;
    manage qty[size];
    horizontalLine();
    indexDisplay();
    horizontalLine();
    for(int i=0;i<size;i++)
        qty[i].Display();
    horizontalLine();
    return 0;
}
