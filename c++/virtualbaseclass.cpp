#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void get_roll_number(void)
    {
        cout << "Your roll_number is " << roll_number << endl;
    }
};
class Test : virtual public student
{
protected:
    float sub1, sub2;

public:
    void set_marks(float s1, float s2)
    {
        sub1 = s1;
        sub2 = s2;
    }
    void get_marks(void)
    {
        cout << "Your marks are here : " << endl
             << "sub1= " << sub1 << endl
             << "sub2= " << sub2 << endl;
    }
};
class Sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "Your score in any sport= " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float TOTAL;

public:
    void display(void)
    {
        TOTAL = sub1 + sub2 + score;
        get_roll_number();
        get_marks();
        get_score();
        cout << "Your Total score is given by " << TOTAL << endl;
    }
};
int main()
{
    Result student1;
    student1.set_roll_number(268);
    student1.set_marks(95.6, 97.9);
    student1.set_score(9.5);
    student1.display();
    return 0;
}
