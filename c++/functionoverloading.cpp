#include <iostream>
using namespace std;
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int a)
{
    return (a * a * a);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The volume of cylinder" << volume(3, 9) << endl;
    cout << "The volume of cubiod" << volume(2, 3, 4) << endl;
    cout << "The volume of cube" << volume(5) << endl;
}