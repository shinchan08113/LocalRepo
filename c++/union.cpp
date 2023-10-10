#include <iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};
int main()
{
    union money u1;
    u1.rice = 120;
    u1.pounds = 50;
    u1.car = 'lambo';
    cout << "The seed in rice is " << u1.rice << endl;
    cout << "The fav. car is " << u1.car << endl;
    cout << "The pounds in your pocket " << u1.pounds << endl;
    return 0;
}