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
     protected:
    float marks1, marks2;

public:
    void setMarks();
    float getTotalMarks();
};
void test::setMarks()
{
    cout << "Enter marks for subject-1 : ";
    cin >> marks1;
    cout << "Enter marks foe subject-2 : ";
    cin >> marks2;
}

float test::getTotalMarks()
{
    return marks1 + marks2;
}

class sports
{

        float score;
    public:
        void setScore()
        {
            cout<<"Enter sports score:";
            cin>>score;
        }
        float getScore()
        {
            return score;
        }
};
class result : public test,public sports
{
public:
    void showResult()
    {
        cout << endl
             << setw(10) << "ROLL NUMBER" <<setw(10)<<"SUB1"<<setw(10)<<"SUB2"<<setw(10)<<"SCORE"<< setw(20) << "TOTAL MARKS";
        cout << endl
             << setw(10) << getRoll_no() <<setw(10)<<marks1<<setw(10)<<marks2<<setw(10)<<getScore() <<setw(20) << getTotalMarks() << endl;
    }
};
int main()
{
    result s1;
    s1.setRoll_no();
    s1.setMarks();
    s1.setScore();
    s1.showResult();
    return 0;
}
