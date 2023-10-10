#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number(void);
};
void student ::get_number(int a)
{
    roll_number = a;
}
void student ::put_number()
{
    cout << "roll_number" << roll_number << endl;
}
class test : public student
{
protected:
    float sub1;
    float sub2;

public:
    void get_mark(float X, float Y)
    {
        sub1 = X;
        sub2 = Y;
    }
    void put_marks(void)
    {
        cout << "marks in sub1" << sub1<<endl;
        cout << "marks in sub2" << sub2<<endl;
    }
};
class result : public test
{
    float total;

public:
    void display(void)
    {
        total = sub1 + sub2;
        put_number();
        put_marks();
    }
};
int main()
{
    result student1;
    student1.get_number(120);
    student1.get_mark(50.5,25.6);
    student1.display();
    return 0;
}