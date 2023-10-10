#include <iostream>
using namespace std;
class complex;
class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator::sumrealcomplex(complex, complex);

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void get_number(void)
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex c1, complex c2)
{
    return (c1.a + c2.a);
}
int main()
{
    complex c1, c2;
    c1.set_number(4, 9);
    c2.set_number(5, 8);
    calculator calc;
    int res = calc.sumrealcomplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << res << endl;
    return 0;
}