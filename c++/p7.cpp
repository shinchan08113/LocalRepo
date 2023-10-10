#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void set_number(int x)
    {
        a=x;
    }
    void get_number()
    {
        cout << "The number is " <<a<<endl;
    }
};
class B : public A
{
public:
    void square()
    {
        cout << "The square of given number is " << (a * a) << endl;
    }
};
class C : public A
{
public:
    void cube()
    {
        cout << "The cube of given number is " << (a * a * a) << endl;
    }
};
int main()
{
    B b;
    b.set_number(2);
    b.get_number();
    b.square();
    C c;
    c.set_number(3);
    c.get_number();
    c.cube();
    return 0;
}