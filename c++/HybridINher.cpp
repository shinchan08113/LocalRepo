#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void get_number(int a)
    {
        roll_no = a;
    }
    void put_number(void)
    {
        cout << "The roll number of student " << roll_no << endl;
    }
};
class test : public student
{
protected:
    float test1;
    float test2;

public:
    void get_marks(float x, float y)
    {
        test1 = x;
        test2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks obtained : " << endl;
        cout << "test1= " << test1 << endl;
        cout << "test2= " << test2 << endl;
    }
};
class sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports score: " << score << endl;
    }
};
class Result : public test, public sports
{
    float total;

public:
    void display(void);
};
void Result::display(void)
{
    total = test1 + test2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total Score :" << total << endl;
}
int main()
{
    Result student1;
    student1.get_number(268);
    student1.get_marks(96.9, 98.9);
    student1.get_score(9.9);
    student1.display();
    return 0;
}