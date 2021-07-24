#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;b=y;
    }
    complex()
    {}
    friend complex operator +(complex ,complex);
    friend complex operator -(complex ,complex);
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
     complex operator +(complex t1,complex t2)
     {
         complex temp;
         temp.a=t1.a+t2.a;
         temp.b=t1.b+t2.b;
         return temp;
     }
  complex operator -(complex t1,complex t2)
  {
      complex t;
      t.a=t1.a-t2.a;
      t.b=t1.b-t2.b;
      return t;
  }

int main()
{
    complex o1(6,7),o2(5,2),result;
    result=o1+o2;
    cout<<"\nAdding two object:\n";
    result.display();
    cout<<"\nSubstracting two object:\n";
    result=o1-o2;
    result.display();
    return 0;
}