#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex , complex );
    void get_number(void)
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex cc1, complex cc2)
{
    complex c3;
    c3.set_number((cc1.a + cc2.a), (cc1.b + cc2.b));
    return c3;
}
int main()
{
    complex c1, c2, sum;
    c1.set_number(4, 6);
    c1.get_number();

    c2.set_number(60, 40);
    c2.get_number();

    sum = sumcomplex(c1, c2);

    return 0;
}