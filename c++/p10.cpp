#include <iostream>
using namespace std;
class balagurusamey
{
public:
    virtual void example() = 0;
};
class c : public balagurusamey
{
public:
    void example()
    {
        cout << "This is book of c " << endl;
    }
};
class oops : public balagurusamey
{
public:
    void example()
    {
        cout << "This is book of oops " << endl;
    }
};
int main()
{
    balagurusamey *a[2];
    c e1;
    oops e2;
    a[0] = &e1;
    a[1] = &e2;
    a[0]->example();
    a[1]->example();
    return 0;
}