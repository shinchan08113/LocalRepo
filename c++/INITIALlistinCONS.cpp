#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(6*i)
    {
        cout << "Constructor Executed " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 5) ;
    return 0;
}