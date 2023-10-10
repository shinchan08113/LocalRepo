#include <iostream>
#include <cmath>
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
    void dispaly()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    friend void distance(point, point);
};
void distance(point p1, point p2)
{
    int x_diff = (p2.x - p1.x);
    int y_diff = (p2.y - p1.y);
    cout << "The distance between these points are " << sqrt(pow(x_diff, 2) + pow(y_diff, 2));
}
int main()
{
    point p1(2, 3);
    p1.dispaly();
    point p2(3, 5);
    p2.dispaly();
    distance(p1, p2);
    return 0;
}