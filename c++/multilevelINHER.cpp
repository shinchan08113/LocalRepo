#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void setroll_number(int);
    void getroll_number(void);
};
void student::setroll_number(int r)
{
    roll_number = r;
}
void student::getroll_number()
{
    cout << "Your rollnumber is" << roll_number << endl;
}
class exam : public student
{
protected:
    float sub1;
    float sub2;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    sub1 = m1;
    sub2 = m2;
}
void exam::get_marks()
{
    cout << "The marks in sub1 are " << sub1 << endl;
    cout << "The marks in sub2 are " << sub2 << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        getroll_number();
        get_marks();
        cout << "YOur percentage is" << (sub1 + sub2) / 2 << " % " << endl;
    }
};
int main()
{
    result student1;
    student1.setroll_number(268);
    student1.set_marks(98.8, 96.9);
    student1.display();
    return 0;
}
