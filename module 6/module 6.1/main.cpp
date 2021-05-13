#include<iostream>
using namespace std;
void power(double m,int n)
{   double res=1;
    for(int i=1;i<=n;i++)
    res*=m;
    cout<<"Answer is :"<<res<<endl;
}

void power (int m,int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    res*=m;
    cout<<"Answer is :"<<res<<endl;
}
int main()
{
    power(2.3,3);
    power(2,3);
    return 0;
}