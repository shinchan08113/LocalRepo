#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying base_class"
             << var_base;
    }
};
class der_class : public base_class
{
public:
    int var_der = 50;
    void display()
    {
        cout << "Displaying der_class"
             <<  var_der;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class base_class_obj;
    der_class der_class_obj;
    base_class_pointer = &der_class_obj;
    base_class_pointer->display();
}