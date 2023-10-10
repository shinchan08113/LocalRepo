#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you ? " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << " kasie ho ?" << endl;
    }
};
class Derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};
int main()
{
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    Derived d;
    d.greet();
    return 0;
}