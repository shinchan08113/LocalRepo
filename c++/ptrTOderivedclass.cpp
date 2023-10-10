#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable " << var_base << endl;
    }
};
class der_class : public base_class
{
public:
    int var_der;
    void display()
    {
        cout << "Displaying dervived class variable " << var_der << endl;
        cout << "Displaying base class variable " << var_base << endl;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class obj_base;
    der_class obj_der;

    base_class_pointer = &obj_der;

    base_class_pointer->var_base = 54;
    base_class_pointer->display();

    base_class_pointer->var_base = 85;
    base_class_pointer->display();

    der_class *der_class_pointer;
    der_class_pointer = &obj_der;
    der_class_pointer->var_base = 95;
    der_class_pointer->var_der = 84;
    der_class_pointer->display();
    return 0;
}