#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Your number is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point p(5, 9);
    p.display();
    point q = point(9, 7);
    q.display();
    return 0;
}