#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code()
    {
        id = 0;
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << "the id is " << id << endl;
    }
};
int main()
{
    code a(10);
    a.display();
    code b(a);
    b.display();
    code c = a;
    c.display();
    code d;
    d = a;
    d.display();
    return 0;
}