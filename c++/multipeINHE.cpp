#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void Display_data()
    {
        cout << "The data1 is " << base1int << endl;
        cout << "The data2 is " << base2int << endl;
        cout << "The sum of data is " << base1int + base2int << endl;
    }
};
int main()
{
    Derived der;
    der.set_base1int(25);
    der.set_base2int(45);
    der.Display_data();
    return 0;
}