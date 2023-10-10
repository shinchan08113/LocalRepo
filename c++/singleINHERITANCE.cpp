#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D : private B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::get_ab(void)
{
    cout << "the value of a AND b " << endl;
    cin >> a >> b ;
}
int B::get_a(void)
{
    return a;
}
void B::show_a()
{
    cout<<"a="<<a<<endl;
}
void D::mul()
{
    get_a();
    c=b*get_a();
}
void D::display()
{
    show_a();
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}
int main()
{
    D d;
    //d.get_ab();
    d.mul();
    //d.show_a();
    d.display();
    //d.b=20;
    d.mul();
    d.display();
    return 0;
}

