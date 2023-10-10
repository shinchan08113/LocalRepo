#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};
class der_class : public base_class
{
public:
    int var_der = 5;
    void display()
    {
        cout << "displaying base class variable var_bas " << var_base << endl;
        cout << "displaying derived class variable var_der " << var_der << endl;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class obj_bas;
    der_class obj_der;

    base_class_pointer = &obj_der;
    base_class_pointer->display();
    return 0;
}