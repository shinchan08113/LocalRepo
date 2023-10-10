#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 4, y = 6;
    cout << "The value of x is " << x << " and The value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " and The value of y is " << y << endl;
    return 0;
}