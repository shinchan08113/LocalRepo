#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "The value of data1 " << getdata1() << endl;
        cout << "The value of data2 " << data2 << endl;
        cout << "The value of data3 " << data3 << endl;
    }
};
int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}