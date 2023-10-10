#include <iostream>
using namespace std;
int sum(int, int);
int main()
{
    int num1, num2;
    cout << "The first number " << endl;
    cin >> num1;
    cout << "The second number " << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
