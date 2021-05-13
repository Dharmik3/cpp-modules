#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    long int roll_no;

public:
    void setRoll_no();
    long int getRoll_no();
};

void student::setRoll_no()
{
    cout << "Enter roll number:";
    cin >> roll_no;
}
long int student::getRoll_no()
{
    return (roll_no);
}

class test : public student
{
    int marks1, marks2;

public:
    void setMarks();
    int getTotalMarks();
};
void test::setMarks()
{
    cout << "Enter marks for subject-1 : ";
    cin >> marks1;
    cout << "Enter marks foe subject-2 : ";
    cin >> marks2;
}

int test::getTotalMarks()
{
    return marks1 + marks2;
}
class result : public test
{
public:
    void showResult()
    {
        cout << endl
             << setw(10) << "Roll Number" << setw(20) << "Total Marks";
        cout << endl
             << setw(10) << getRoll_no() << setw(20) << getTotalMarks() << endl;
    }
};
int main()
{
    result s1;
    s1.setRoll_no();
    s1.setMarks();
    s1.showResult();
    return 0;
}