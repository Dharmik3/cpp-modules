#include <iostream>
#include <string.h>
using namespace std;

class person
{
    char name[20];

protected:
    void setname(char *n)
    {
        strcpy(name, n);
    }

public:
    char *getname()
    {
        return name;
    }
};

class employe : public person
{
    float salary;

protected:
    void setsalary(float s)
    {
        salary = s;
    }

public:
    float getsalary()
    {
        return salary;
    }
    void setEmployee(char *n, float s)
    {
        setname(n);
        setsalary(s);
    }
};

class person_protect
{
    char name[20];

protected:
    void setname(char *n)
    {
        strcpy(name, n);
    }

public:
    char *getname()
    {
        return name;
    }
};

class employe_protect : protected person_protect
{
    float salary;

protected:
    void setsalary(float s)
    {
        salary = s;
    }

public:
    float getsalary()
    {
        return salary;
    }
    void setEmployee(char *n, float s)
    {
        setname(n);
        setsalary(s);
    }
    void getInfo()
    {
        cout << "Employee name is : " << getname() << endl;
        cout << "Salary is :" << getsalary() << endl;
    }
};

class person_private
{
    char name[20];

protected:
    void setname(char *n)
    {
        strcpy(name, n);
    }

public:
    char *getname()
    {
        return name;
    }
};

class employe_private : private person_private
{
    float salary;

protected:
    void setsalary(float s)
    {
        salary = s;
    }

public:
    float getsalary()
    {
        return salary;
    }
    void setEmployee(char *n, float s)
    {
        setname(n);
        setsalary(s);
    }

    void getInfo()
    {
        cout << "Employee name is : " << getname() << endl;
        cout << "Salary is :" << getsalary() << endl;
    }
};
int main()
{
    char name[20];
    float salary;
    cout << "-------public inheritance----------" << endl;
    cout << "Enter a name:";
    cin >> name;
    cout << "Enter salary:";
    cin >> salary;
    employe e1;
    e1.setEmployee(name, salary);
    cout << "Employee name is : " << e1.getname() << endl;
    cout << "Salary is :" << e1.getsalary() << endl;

    cout << "\n-------protected inheritance----------" << endl;
    employe_protect e2;
    cout << "Enter a name:";
    cin >> name;
    cout << "Enter salary:";
    cin >> salary;
    e2.setEmployee(name, salary);
    e2.getInfo();

    cout << "\n-------private inheritance----------" << endl;
    employe_private e3;
    cout << "Enter a name:";
    cin >> name;
    cout << "Enter salary:";
    cin >> salary;
    e3.setEmployee(name, salary);
    e3.getInfo();
    return 0;
}
