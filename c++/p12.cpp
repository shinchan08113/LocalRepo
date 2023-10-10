#include <iostream>
using namespace std;
class DB;
class DM
{
    int m, cm;

public:
    void set_data()
    {
        cout << "Enter the data in meter value " << endl;
        cin >> m;
        cout << "Enter the data in centimeter value " << endl;
        cin >> cm;
    }
    friend float sum(DM a, DB b);
};
class DB
{
    int ft, in;

public:
    void set_data()
    {
        cout << "Enter the data in feet value " << endl;
        cin >> ft;
        cout << "Enter the data in inches value " << endl;
        cin >> in;
    }
    friend float sum(DM a, DB b);
};
float sum(DM a, DB b)
{
    float x, y, z;
    x = (a.m + (a.cm / 100));
    y = (b.ft + (b.in / 12));
    z = (x + (y * 0.304));
    return z;
}
int main()
{
    DM a;
    DB b;
    cout << "Enter the value in meter and centimeter " << endl;
    a.set_data();
    cout << "Enter the value in feet and inches " << endl;
    b.set_data();
    sum(a, b);
    cout << "The summed value in meter is " << sum(a, b) << endl;
    return 0;
}
