#include <iostream>
using namespace std;
class test
{
    int a, b, c;

public:
    void get_data(int , int , int );
    void operator-();
    void display();
};
void test::get_data(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
void test::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}
void test::display()
{
    cout << "The value of a"<<a
         << "The value of b"<<b
         << "The value of c"<<c << endl;
}
int main()
{
    test t1;
    t1.get_data(10, -5, 6);
    t1.display();
    -t1;
    t1.display();
    return 0;
}
