#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void set_data(int a, int b)
    {
        real = a;
        imag = b;
    }
    void get_data(void)
    {
        cout << "The real part of complex " << real << endl;
        cout << "The imagnary part of complex " << imag << endl;
    }
};
int main()
{
    /* complex c;
     complex *ptr=&c;

    (*ptr).set_data(4, 6);
    (*ptr).get_data();*/

    /*complex *ptr = new complex;
    ptr->set_data(5,9);
    ptr->get_data();*/

    complex *ptr = new complex[4];
    ptr->set_data(4, 5);
    ptr->get_data();
    return 0;
}