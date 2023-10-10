#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int V1, int V2)
    {
        a = V1;
        b = V2;
    }
    void getdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();
    c2.setdata(5, 6);
    c2.printnumber();
    c3.getdatabysum(c1, c2);
    c3.printnumber();
    return 0;
}