#include<iostream>
using namespace std;
class Time
{
    int HR,MIN,SEC;
    public:
        void setTime(int ,int ,int);
        void showTime();
        void normalize();
        void add(Time o1,Time o2);

};

void Time:: add(Time o1,Time o2)
{
    HR=o1.HR+o2.HR;
    MIN=o1.MIN+o2.MIN;
    SEC=o1.SEC+o2.SEC;
}
void Time ::setTime(int h,int m,int s)
{
    HR=h;
    MIN=m;
    SEC=s;
}

void Time :: showTime()
{
    cout<<HR<<":"<<MIN<<":"<<SEC<<endl;
}
void Time :: normalize()
{
    MIN+=SEC/60;
    SEC%=60;
    HR+=MIN/60;
    MIN%=60;
}
int main()
{
    Time t1,t2,t;
    t1.setTime(4,100,100);
    t2.setTime(3,200,188);
    t1.showTime();
    t2.showTime();
    t.add(t1,t2);
    t.normalize();
    cout<<"Sum:->";
    t.showTime();
    return 0;
}
