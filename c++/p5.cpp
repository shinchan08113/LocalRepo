#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void show_number()
    {
        cout << "Roll number " << roll_number << endl;
    }
};
class test : public student
{
protected:
    float part1, part2;

public:
    void set_marks(float a, float b)
    {
        part1 = a;
        part2 = b;
    }
    void show_marks()
    {
        cout << "Obtained marks "
             << "part1 " << part1
             << "part2 " << part2;
    }
};
class sports
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void show_score()
    {
        cout << "sports score " << score << endl;
    }
};
class result : public test, public sports
{
public:
    void display()
    {
        float total = part1 + part2 + score;
        show_number();
        show_marks();
        show_score();
        cout << "Total score " << total << endl;
    }
};
int main()
{
    result S1;
    S1.set_number(268);
    S1.set_marks(98.9, 98.5);
    S1.set_score(9.7);
    S1.display();
    return 0;
}
