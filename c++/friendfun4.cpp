#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;

public:
    void setdata(int a)
    {
        val1 = a;
    }
    void printdata()
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void setdata(int a)
    {
        val2 = a;
    }
    void printdata()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.setdata(5);
    oc2.setdata(9);
    exchange(oc1, oc2);
    cout << "The value of c1 after exchanging become ";
    oc1.printdata();
    cout << "The value of c2 after exchanging becomes ";
    oc2.printdata();
    return 0;
}