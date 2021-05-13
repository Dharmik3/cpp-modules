#include<iostream>
using namespace std;

class product
{
    int code;
    int total_value;
    public:
        void display()
        {
            cout<<"code : "<<code<<endl;
            cout<<"TOTAL PRICE :"<<total_value<<endl;
        }
        int& getCode()
        {
            return code;
        }
        int& getValue()
        {
            return total_value;
        }
        // product(){};
        // product(item obj)
        // {
        //     code=obj.getCode();
        //     total_value=obj.getTotal_value();
        // }
};
class item
{
    int code;
    float value;
 int total_value;
    int unit;
    public:

        void setData(int c,int u,float price)
        {
            code=c;
            unit=u;
            value=price;
            total_value=unit*value;
        }
        void display()
        {
            cout<<"code : "<<code<<endl;
            cout<<"unit : "<<unit<<endl;
            cout<<"TOTAL PRICE :"<<total_value;
        }
        int getCode()
        {
            return code;
        }
        int getTotal_value()
        {
            return total_value;
        }
        int getUnit()
        {
            return unit;
        }
        operator product()
        {
            product temp;
            temp.getCode()=code;
            temp.getValue()=total_value;
            return temp;
        }

};

int main()
{
    item i1;
    product p1;
    i1.setData(231,5,120);
    cout<<"\n Item Display"<<endl;
    i1.display();
    p1=i1;
    cout<<"\n\nProduct Display"<<endl;
    p1.display();
    return 0;
}
