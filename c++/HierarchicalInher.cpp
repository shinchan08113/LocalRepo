#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void getNo()
    {
        cout << "Enter the number " << endl;
        cin >> a;
    }
};
class B : public A
{
public:
    void square()
    {
        cout << "The square of number is " << (a * a) << endl;
    }
};
class C : public A
{
public:
    void cube()
    {
        cout << "The cube of number is " << (a * a * a) << endl;
    }
};
int main()
{
    B b;
    b.getNo();
    b.square();
    C c;
    c.getNo();
    c.cube();
    return 0;
}